/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class at_renehollander_duktape_values_DukArray */

#ifndef _Included_at_renehollander_duktape_values_DukArray
#define _Included_at_renehollander_duktape_values_DukArray
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    _addDouble
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_at_renehollander_duktape_values_DukArray__1addDouble
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    _addBoolean
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_at_renehollander_duktape_values_DukArray__1addBoolean
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    _addString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_at_renehollander_duktape_values_DukArray__1addString
  (JNIEnv *, jobject, jstring);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    _addUndefined
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_at_renehollander_duktape_values_DukArray__1addUndefined
  (JNIEnv *, jobject);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    _addNull
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_at_renehollander_duktape_values_DukArray__1addNull
  (JNIEnv *, jobject);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    _addReference
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_at_renehollander_duktape_values_DukArray__1addReference
  (JNIEnv *, jobject, jint);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_at_renehollander_duktape_values_DukArray_size
  (JNIEnv *, jobject);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    toJSON
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_at_renehollander_duktape_values_DukArray_toJSON
  (JNIEnv *, jobject);

/*
 * Class:     at_renehollander_duktape_values_DukArray
 * Method:    createEmptyArray
 * Signature: (Lat/renehollander/duktape/Duktape;)I
 */
JNIEXPORT jint JNICALL Java_at_renehollander_duktape_values_DukArray_createEmptyArray
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
