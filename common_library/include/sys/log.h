/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: jian yi, eyjian@qq.com
 */
#ifndef MOOON_SYS_LOG_H
#define MOOON_SYS_LOG_H
#include <stdio.h>
#include <sys/config.h>
#include <util/print_color.h>
SYS_NAMESPACE_BEGIN

/** 不要修改下面的常量值，而应当通过对应的方法去修改
  * 这些常量值主要是方便多模块共享，故放在这个公有头文件当中
  */
enum
{
    LOG_LINE_SIZE_MIN              = 256,        /** 日志行最小长度 */
    LOG_LINE_SIZE_MAX              = 32768,      /** 日志行最大长度(32K) ，最大不能超过64K，因为使用2字节无符号整数存储的 */
    DEFAULT_LOG_FILE_SIZE          = 104857600,  /** 默认的单个日志文件大小(100MB) */
    DEFAULT_LOG_FILE_BACKUP_NUMBER = 10          /** 默认的日志文件备份个数 */
};

/** 定义日志级别 */
typedef enum
{
    LOG_LEVEL_DETAIL = 0,
    LOG_LEVEL_DEBUG  = 1,
    LOG_LEVEL_INFO   = 2,
    LOG_LEVEL_WARN   = 3,
    LOG_LEVEL_ERROR  = 4,
    LOG_LEVEL_FATAL  = 5,    
    LOG_LEVEL_STATE  = 6,  /** 仅输出状态数据 */
    LOG_LEVEL_TRACE  = 7
}log_level_t;

/** 通过日志级别名得到日志级别 */
extern log_level_t get_log_level(const char* level_name);
/** 通过日志级别得到日志级别名，如果传入错误的日志级别，则返回NULL */
extern const char* get_log_level_name(log_level_t log_level);

/**
  * 日志器接口，提供常见的写日志功能
  */
class ILogger
{
public:
    /** 空虚拟析构函数，以屏蔽编译器告警 */
    virtual ~ILogger() {}
        
    /** 是否允许同时在标准输出上打印日志 */
    virtual void enable_screen(bool enabled) {}
    /** 是否允许二进制日志，二进制日志必须通过它来打开 */
    virtual void enable_bin_log(bool enabled) {}
    /** 是否允许跟踪日志，跟踪日志必须通过它来打开 */
    virtual void enable_trace_log(bool enabled) {}
    /** 是否自动在一行后添加结尾的点号，如果最后已经有点号或换符符，则不会再添加 */
    virtual void enable_auto_adddot(bool enabled) {}
    /** 是否自动添加换行符，如果已经有换行符，则不会再自动添加换行符 */
    virtual void enable_auto_newline(bool enabled) {}   
    /** 设置日志级别，跟踪日志级别不能通过它来设置 */
    virtual void set_log_level(log_level_t log_level) {}
    /** 设置单个文件的最大建议大小 */
    virtual void set_single_filesize(uint32_t filesize) {}
    /** 设置日志文件备份个数，不包正在写的日志文件 */
    virtual void set_backup_number(uint16_t backup_number) {}

    /** 是否允许二进制日志 */
    virtual bool enabled_bin() { return false; }
    /** 是否允许Detail级别日志 */
    virtual bool enabled_detail() { return false; }
    /** 是否允许Debug级别日志 */
    virtual bool enabled_debug() { return false; }
    /** 是否允许Info级别日志 */
    virtual bool enabled_info() { return false; }
    /** 是否允许Warn级别日志 */
    virtual bool enabled_warn() { return false; }
    /** 是否允许Error级别日志 */
    virtual bool enabled_error() { return false; }
    /** 是否允许Fatal级别日志 */
    virtual bool enabled_fatal() { return false; }
    /** 是否允许输出状态日志 */
    virtual bool enabled_state() { return false; }
    /** 是否允许Trace级别日志 */
    virtual bool enabled_trace() { return false; }

    virtual void log_detail(const char* filename, int lineno, const char* module_name, const char* format, ...)  __attribute__((format(printf, 5, 6))) {}
    virtual void log_debug(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))   {}
    virtual void log_info(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))    {}
    virtual void log_warn(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))    {}
    virtual void log_error(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))   {}
    virtual void log_fatal(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))   {}
    virtual void log_state(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))   {}
    virtual void log_trace(const char* filename, int lineno, const char* module_name, const char* format, ...) __attribute__((format(printf, 5, 6)))   {}

    /** 写二进制日志 */
    virtual void bin_log(const char* filename, int lineno, const char* module_name, const char* log, uint16_t size) {}
};

//////////////////////////////////////////////////////////////////////////
// 日志宏，方便记录日志
extern ILogger* g_logger; // 只是声明，不是定义，不能赋值哦！

#define __MYLOG_DETAIL(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf("[DETAIL][%s:%d]", __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_detail()) { \
		logger->log_detail(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_DEBUG(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf(PRINT_COLOR_DARY_GRAY"[DEBUG][%s:%d]"PRINT_COLOR_NONE, __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_debug()) { \
		logger->log_debug(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_INFO(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf("[INFO][%s:%d]", __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_info()) { \
		logger->log_info(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_WARN(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf(PRINT_COLOR_YELLOW"[WARN][%s:%d]"PRINT_COLOR_NONE, __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_warn()) { \
		logger->log_warn(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_ERROR(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf(PRINT_COLOR_RED"[ERROR][%s:%d]"PRINT_COLOR_NONE, __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_error()) { \
		logger->log_error(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_FATAL(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf(PRINT_COLOR_BROWN"[FATAL][%s:%d]"PRINT_COLOR_NONE, __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_fatal()) { \
		logger->log_fatal(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_STATE(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf("[STATE][%s:%d]", __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_state()) { \
		logger->log_state(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_TRACE(logger, module_name, format, ...) \
do { \
	if (NULL == logger) { \
	    printf("[TRACE][%s:%d]", __FILE__, __LINE__); \
		printf(format, ##__VA_ARGS__); \
	} \
	else if (logger->enabled_trace()) { \
		logger->log_trace(__FILE__, __LINE__, module_name, format, ##__VA_ARGS__); \
	} \
} while(false)

#define __MYLOG_BIN(logger, module_name, log, size) \
do { \
    if ((logger != NULL) && logger->enabled_bin()) \
        logger->bin_log(__FILE__, __LINE__, module_name, log, size); \
} while(false)

#define MYLOG_BIN(log, size)         __MYLOG_BIN(sys::g_logger, log, size)
#define MYLOG_TRACE(format, ...)     __MYLOG_TRACE(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_STATE(format, ...)     __MYLOG_STATE(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_FATAL(format, ...)     __MYLOG_FATAL(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_ERROR(format, ...)     __MYLOG_ERROR(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_WARN(format, ...)      __MYLOG_WARN(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_INFO(format, ...)      __MYLOG_INFO(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_DEBUG(format, ...)     __MYLOG_DEBUG(sys::g_logger, NULL, format, ##__VA_ARGS__)
#define MYLOG_DETAIL(format, ...)    __MYLOG_DETAIL(sys::g_logger, NULL, format, ##__VA_ARGS__)

SYS_NAMESPACE_END
#endif // MOOON_SYS_LOG_H
