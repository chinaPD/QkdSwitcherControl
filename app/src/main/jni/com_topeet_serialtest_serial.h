/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_topeet_serial_test */

#ifndef _Included_com_topeet_serial_test
#define _Included_com_topeet_serial_test
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_topeet_serialtest_serial
 * Method:    Open
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_topeet_serialtest_serial_Open
  (JNIEnv *env, jobject obj, jint Port, jint Rate,jint flag);

/*
 * Class:     com_topeet_serial_test
 * Method:    Close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_topeet_serial_test_serial_Close
  (JNIEnv *, jobject,jint flag);

/*
 * Class:     com_topeet_serialtest_serial
 * Method:    Read
 * Signature: ()I
 */
JNIEXPORT jintArray JNICALL Java_com_topeet_serialtest_serial_Read
  (JNIEnv *, jobject,jint flag );

/*
 * Class:     com_topeet_serialtest_serial
 * Method:    Write
 * Signature: ()I
 */
JNIEXPORT jintArray JNICALL Java_com_topeet_serialtest_serial_Write
  (JNIEnv *, jobject, jintArray, jint,jint flag);

#ifdef __cplusplus
}
#endif
#endif
