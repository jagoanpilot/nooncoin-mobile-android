/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nooncoinwallet_core_BRCoreTransaction */

#ifndef _Included_com_nooncoinwallet_core_BRCoreTransaction
#define _Included_com_nooncoinwallet_core_BRCoreTransaction
#ifdef __cplusplus
extern "C" {
#endif
#undef com_nooncoinwallet_core_BRCoreTransaction_JNI_COPIES_TRANSACTIONS
#define com_nooncoinwallet_core_BRCoreTransaction_JNI_COPIES_TRANSACTIONS 1L
/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getHash
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getHash
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getVersion
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getInputs
 * Signature: ()[Lcom/nooncoinwallet/core/BRCoreTransactionInput;
 */
JNIEXPORT jobjectArray JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getInputs
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getOutputs
 * Signature: ()[Lcom/nooncoinwallet/core/BRCoreTransactionOutput;
 */
JNIEXPORT jobjectArray JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getOutputs
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getLockTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getLockTime
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    setLockTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_setLockTime
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getBlockHeight
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getBlockHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getTimestamp
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getTimestamp
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    setTimestamp
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_setTimestamp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    serialize
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_serialize
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    addInput
 * Signature: (Lcom/nooncoinwallet/core/BRCoreTransactionInput;)V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_addInput
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    addOutput
 * Signature: (Lcom/nooncoinwallet/core/BRCoreTransactionOutput;)V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_addOutput
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    shuffleOutputs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_shuffleOutputs
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getSize
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getSize
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getStandardFee
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getStandardFee
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    isSigned
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_isSigned
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    sign
 * Signature: ([Lcom/nooncoinwallet/core/BRCoreKey;I)V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_sign
  (JNIEnv *, jobject, jobjectArray, jint);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    isStandard
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_isStandard
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getReverseHash
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getReverseHash
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    getMinOutputAmount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_getMinOutputAmount
  (JNIEnv *, jclass);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_disposeNative
  (JNIEnv *, jobject);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    initializeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_initializeNative
  (JNIEnv *, jclass);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    createJniCoreTransaction
 * Signature: ([BJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_createJniCoreTransaction
  (JNIEnv *, jclass, jbyteArray, jlong, jlong);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    createJniCoreTransactionSerialized
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_createJniCoreTransactionSerialized
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_nooncoinwallet_core_BRCoreTransaction
 * Method:    createJniCoreTransactionEmpty
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_nooncoinwallet_core_BRCoreTransaction_createJniCoreTransactionEmpty
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
