// Write by yijian on 2014/12/27
// DO NOT EDIT!
// this header file is auto generated by any2string.sh
// edit any2string.sh if necessary
//
// 类型安全的变参函数，可用来替代类型不安全的sprintf()和snprintf()等函数
// 使用示例1: std::string str = any2string(20141227);
// 使用示例2: std::string str = any2string(20141227, "22:07:10");
// 使用示例3: std::string str = any2string(1, "2", '3', std::string("4"));
#ifndef MOOON_UTIL_ANY2STRING_H
#define MOOON_UTIL_ANY2STRING_H
#include "util/config.h"
#include <string>
#include <sstream>
UTIL_NAMESPACE_BEGIN

template <typename T0>
inline std::string any2string(const T0& t0)
{
    std::stringstream ss;
    ss << t0;
    return ss.str();
}

template <typename T0, typename T1>
inline std::string any2string(const T0& t0, const T1& t1)
{
    std::stringstream ss;
    ss << t0 << t1;
    return ss.str();
}

template <typename T0, typename T1, typename T2>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2)
{
    std::stringstream ss;
    ss << t0 << t1 << t2;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23 << t24;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23 << t24 << t25;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23 << t24 << t25 << t26;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23 << t24 << t25 << t26 << t27;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27, const T28& t28)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23 << t24 << t25 << t26 << t27 << t28;
    return ss.str();
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline std::string any2string(const T0& t0, const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27, const T28& t28, const T29& t29)
{
    std::stringstream ss;
    ss << t0 << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8 << t9 << t10 << t11 << t12 << t13 << t14 << t15 << t16 << t17 << t18 << t19 << t20 << t21 << t22 << t23 << t24 << t25 << t26 << t27 << t28 << t29;
    return ss.str();
}


UTIL_NAMESPACE_END
#endif // MOOON_UTIL_ANY2STRING_H

