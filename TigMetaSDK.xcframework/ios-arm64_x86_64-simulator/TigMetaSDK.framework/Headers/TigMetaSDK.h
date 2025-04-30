#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TMSDK__SkieTypeExportsKt, TMSDK__SkieSuspendWrappersKt, TMSDKVideoCompanion, TMSDKVideo, TMSDKUShort, TMSDKULong, TMSDKUInt, TMSDKUByte, TMSDKTig, TMSDKSkie_SuspendResultSuccess, TMSDKSkie_SuspendResultError, TMSDKSkie_SuspendResultCanceled, TMSDKSkie_SuspendResult, TMSDKSkie_SuspendHandler, TMSDKSkie_CancellationHandler, TMSDKSkieKotlinStateFlow<T>, TMSDKSkieKotlinSharedFlow<T>, TMSDKSkieKotlinOptionalStateFlow<T>, TMSDKSkieKotlinOptionalSharedFlow<T>, TMSDKSkieKotlinOptionalMutableStateFlow<T>, TMSDKSkieKotlinOptionalMutableSharedFlow<T>, TMSDKSkieKotlinOptionalFlow<T>, TMSDKSkieKotlinMutableStateFlow<T>, TMSDKSkieKotlinMutableSharedFlow<T>, TMSDKSkieKotlinFlow<T>, TMSDKSkieColdFlowIterator<E>, TMSDKShort, TMSDKPointsDataResponse, TMSDKPointsCompanion, TMSDKPoints, TMSDKPointCompanion, TMSDKPoint, TMSDKPanelCompanion, TMSDKPanel, TMSDKNumber, TMSDKMutableSet<ObjectType>, TMSDKMutableDictionary<KeyType, ObjectType>, TMSDKMetadataCompanion, TMSDKMetadata, TMSDKMetabodyCompanion, TMSDKMetabody, TMSDKMetaDataResponse, TMSDKMetaCompanion, TMSDKMeta, TMSDKLong, TMSDKKotlinx_serialization_coreStructureKindOBJECT, TMSDKKotlinx_serialization_coreStructureKindMAP, TMSDKKotlinx_serialization_coreStructureKindLIST, TMSDKKotlinx_serialization_coreStructureKindCLASS, TMSDKKotlinx_serialization_coreStructureKind, TMSDKKotlinx_serialization_coreSerializersModule, TMSDKKotlinx_serialization_coreSerialKindENUM, TMSDKKotlinx_serialization_coreSerialKindCONTEXTUAL, TMSDKKotlinx_serialization_coreSerialKind, TMSDKKotlinx_serialization_corePrimitiveKindSTRING, TMSDKKotlinx_serialization_corePrimitiveKindSHORT, TMSDKKotlinx_serialization_corePrimitiveKindLONG, TMSDKKotlinx_serialization_corePrimitiveKindINT, TMSDKKotlinx_serialization_corePrimitiveKindFLOAT, TMSDKKotlinx_serialization_corePrimitiveKindDOUBLE, TMSDKKotlinx_serialization_corePrimitiveKindCHAR, TMSDKKotlinx_serialization_corePrimitiveKindBYTE, TMSDKKotlinx_serialization_corePrimitiveKindBOOLEAN, TMSDKKotlinx_serialization_corePrimitiveKind, TMSDKKotlinx_serialization_corePolymorphicKindSEALED, TMSDKKotlinx_serialization_corePolymorphicKindOPEN, TMSDKKotlinx_serialization_corePolymorphicKind, TMSDKKotlinThrowable, TMSDKKotlinRuntimeException, TMSDKKotlinNothing, TMSDKKotlinIllegalStateException, TMSDKKotlinException, TMSDKKotlinCancellationException, TMSDKKotlinArray<T>, TMSDKItemCompanion, TMSDKItem, TMSDKInt, TMSDKGroupCompanion, TMSDKGroup, TMSDKFloat, TMSDKDouble, TMSDKContentDataResponse, TMSDKContentCompanion, TMSDKContent, TMSDKByte, TMSDKBoolean, TMSDKBase, NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSArray<ObjectType>;

@protocol TMSDKSkie_DispatcherDelegate, TMSDKKotlinx_serialization_coreSerializersModuleCollector, TMSDKKotlinx_serialization_coreSerializationStrategy, TMSDKKotlinx_serialization_coreSerialDescriptor, TMSDKKotlinx_serialization_coreKSerializer, TMSDKKotlinx_serialization_coreEncoder, TMSDKKotlinx_serialization_coreDeserializationStrategy, TMSDKKotlinx_serialization_coreDecoder, TMSDKKotlinx_serialization_coreCompositeEncoder, TMSDKKotlinx_serialization_coreCompositeDecoder, TMSDKKotlinx_coroutines_coreStateFlow, TMSDKKotlinx_coroutines_coreSharedFlow, TMSDKKotlinx_coroutines_coreRunnable, TMSDKKotlinx_coroutines_coreMutableStateFlow, TMSDKKotlinx_coroutines_coreMutableSharedFlow, TMSDKKotlinx_coroutines_coreFlowCollector, TMSDKKotlinx_coroutines_coreFlow, TMSDKKotlinKDeclarationContainer, TMSDKKotlinKClassifier, TMSDKKotlinKClass, TMSDKKotlinKAnnotatedElement, TMSDKKotlinIterator, TMSDKKotlinAnnotation, NSCopying;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface TMSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface TMSDKBase (TMSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface TMSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface TMSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTMSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface TMSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface TMSDKByte : TMSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface TMSDKUByte : TMSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface TMSDKShort : TMSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface TMSDKUShort : TMSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface TMSDKInt : TMSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface TMSDKUInt : TMSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface TMSDKLong : TMSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface TMSDKULong : TMSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface TMSDKFloat : TMSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface TMSDKDouble : TMSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface TMSDKBoolean : TMSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface TMSDKSkieColdFlowIterator<E> : TMSDKBase
- (instancetype)initWithFlow:(id<TMSDKKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(TMSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol TMSDKKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface TMSDKSkieKotlinFlow<__covariant T> : TMSDKBase <TMSDKKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol TMSDKKotlinx_coroutines_coreSharedFlow <TMSDKKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol TMSDKKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol TMSDKKotlinx_coroutines_coreMutableSharedFlow <TMSDKKotlinx_coroutines_coreSharedFlow, TMSDKKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<TMSDKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface TMSDKSkieKotlinMutableSharedFlow<T> : TMSDKBase <TMSDKKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<TMSDKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol TMSDKKotlinx_coroutines_coreStateFlow <TMSDKKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol TMSDKKotlinx_coroutines_coreMutableStateFlow <TMSDKKotlinx_coroutines_coreStateFlow, TMSDKKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface TMSDKSkieKotlinMutableStateFlow<T> : TMSDKBase <TMSDKKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<TMSDKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface TMSDKSkieKotlinOptionalFlow<__covariant T> : TMSDKBase <TMSDKKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface TMSDKSkieKotlinOptionalMutableSharedFlow<T> : TMSDKBase <TMSDKKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<TMSDKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface TMSDKSkieKotlinOptionalMutableStateFlow<T> : TMSDKBase <TMSDKKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<TMSDKKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface TMSDKSkieKotlinOptionalSharedFlow<__covariant T> : TMSDKBase <TMSDKKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface TMSDKSkieKotlinOptionalStateFlow<__covariant T> : TMSDKBase <TMSDKKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface TMSDKSkieKotlinSharedFlow<__covariant T> : TMSDKBase <TMSDKKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface TMSDKSkieKotlinStateFlow<__covariant T> : TMSDKBase <TMSDKKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<TMSDKKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface TMSDKSkie_CancellationHandler : TMSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol TMSDKSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<TMSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface TMSDKSkie_SuspendHandler : TMSDKBase
- (instancetype)initWithCancellationHandler:(TMSDKSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<TMSDKSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(TMSDKSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface TMSDKSkie_SuspendResult : TMSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface TMSDKSkie_SuspendResultCanceled : TMSDKSkie_SuspendResult
@property (class, readonly, getter=shared) TMSDKSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface TMSDKSkie_SuspendResultError : TMSDKSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface TMSDKSkie_SuspendResultSuccess : TMSDKSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (TMSDKSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContentDataResponse")))
@interface TMSDKContentDataResponse : TMSDKBase
@property TMSDKContent * _Nullable data __attribute__((swift_name("data")));
@property NSString *message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataResponse")))
@interface TMSDKMetaDataResponse : TMSDKBase
@property TMSDKMetadata * _Nullable data __attribute__((swift_name("data")));
@property NSString *message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsDataResponse")))
@interface TMSDKPointsDataResponse : TMSDKBase
@property TMSDKPoints * _Nullable data __attribute__((swift_name("data")));
@property NSString *message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tig")))
@interface TMSDKTig : TMSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContentDataJwt:(NSString *)jwt cid:(NSString *)cid completionHandler:(void (^)(TMSDKContentDataResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContentData(jwt:cid:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMetaDataJwt:(NSString *)jwt cid:(NSString *)cid pagenum:(int32_t)pagenum completionHandler:(void (^)(TMSDKMetaDataResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMetaData(jwt:cid:pagenum:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPointsDataJwt:(NSString *)jwt cid:(NSString *)cid completionHandler:(void (^)(TMSDKPointsDataResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPointsData(jwt:cid:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content")))
@interface TMSDKContent : TMSDKBase
@property (class, readonly, getter=companion) TMSDKContentCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSString * _Nullable custom __attribute__((swift_name("custom")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) int32_t group_id __attribute__((swift_name("group_id")));
@property (readonly) NSString *group_name __attribute__((swift_name("group_name")));
@property (readonly) TMSDKKotlinArray<TMSDKItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString * _Nullable logo_image_url __attribute__((swift_name("logo_image_url")));
@property (readonly) NSString * _Nullable logo_link_url __attribute__((swift_name("logo_link_url")));
@property (readonly) int32_t logo_mode __attribute__((swift_name("logo_mode")));
@property (readonly) NSString * _Nullable ogp_image_url __attribute__((swift_name("ogp_image_url")));
@property (readonly) NSString *thumbnail_url __attribute__((swift_name("thumbnail_url")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *updated __attribute__((swift_name("updated")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) TMSDKKotlinArray<TMSDKVideo *> *videos __attribute__((swift_name("videos")));
- (instancetype)initWithTitle:(NSString *)title description:(NSString * _Nullable)description thumbnail_url:(NSString *)thumbnail_url group_id:(int32_t)group_id group_name:(NSString *)group_name url:(NSString *)url created:(NSString *)created updated:(NSString *)updated items:(TMSDKKotlinArray<TMSDKItem *> *)items custom:(NSString * _Nullable)custom logo_mode:(int32_t)logo_mode logo_image_url:(NSString * _Nullable)logo_image_url logo_link_url:(NSString * _Nullable)logo_link_url ogp_image_url:(NSString * _Nullable)ogp_image_url videos:(TMSDKKotlinArray<TMSDKVideo *> *)videos error:(NSString * _Nullable)error __attribute__((swift_name("init(title:description:thumbnail_url:group_id:group_name:url:created:updated:items:custom:logo_mode:logo_image_url:logo_link_url:ogp_image_url:videos:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKContent *)doCopyTitle:(NSString *)title description:(NSString * _Nullable)description thumbnail_url:(NSString *)thumbnail_url group_id:(int32_t)group_id group_name:(NSString *)group_name url:(NSString *)url created:(NSString *)created updated:(NSString *)updated items:(TMSDKKotlinArray<TMSDKItem *> *)items custom:(NSString * _Nullable)custom logo_mode:(int32_t)logo_mode logo_image_url:(NSString * _Nullable)logo_image_url logo_link_url:(NSString * _Nullable)logo_link_url ogp_image_url:(NSString * _Nullable)ogp_image_url videos:(TMSDKKotlinArray<TMSDKVideo *> *)videos error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(title:description:thumbnail_url:group_id:group_name:url:created:updated:items:custom:logo_mode:logo_image_url:logo_link_url:ogp_image_url:videos:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="custom")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="owner_group_id")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="owner_group_name")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="items")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo_image_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo_link_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo_mode")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ogp_image_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="player_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="videos")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content.Companion")))
@interface TMSDKContentCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKContentCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Group")))
@interface TMSDKGroup : TMSDKBase
@property (class, readonly, getter=companion) TMSDKGroupCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) int32_t gid __attribute__((swift_name("gid")));
- (instancetype)initWithGid:(int32_t)gid error:(NSString * _Nullable)error __attribute__((swift_name("init(gid:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKGroup *)doCopyGid:(int32_t)gid error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(gid:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gid")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Group.Companion")))
@interface TMSDKGroupCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKGroupCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item")))
@interface TMSDKItem : TMSDKBase
@property (class, readonly, getter=companion) TMSDKItemCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable balloon __attribute__((swift_name("balloon")));
@property (readonly) NSString *balloon_bg_color __attribute__((swift_name("balloon_bg_color")));
@property (readonly) int32_t balloon_bg_opacity __attribute__((swift_name("balloon_bg_opacity")));
@property (readonly) NSString *balloon_custom_image_url __attribute__((swift_name("balloon_custom_image_url")));
@property (readonly) int32_t balloon_direction __attribute__((swift_name("balloon_direction")));
@property (readonly) int32_t balloon_font_style __attribute__((swift_name("balloon_font_style")));
@property (readonly) int32_t balloon_font_weight __attribute__((swift_name("balloon_font_weight")));
@property (readonly) int32_t balloon_overflow __attribute__((swift_name("balloon_overflow")));
@property (readonly) int32_t balloon_size __attribute__((swift_name("balloon_size")));
@property (readonly) NSString *balloon_text_color __attribute__((swift_name("balloon_text_color")));
@property (readonly) int32_t balloon_type __attribute__((swift_name("balloon_type")));
@property (readonly) NSString *class_type __attribute__((swift_name("class_type")));
@property (readonly) NSString * _Nullable currency_code __attribute__((swift_name("currency_code")));
@property (readonly) NSString * _Nullable custom __attribute__((swift_name("custom")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL hidden_balloon __attribute__((swift_name("hidden_balloon")));
@property (readonly) BOOL hidden_thumbnail __attribute__((swift_name("hidden_thumbnail")));
@property (readonly) NSString *open_behavior __attribute__((swift_name("open_behavior")));
@property (readonly) TMSDKPanel * _Nullable panel __attribute__((swift_name("panel")));
@property (readonly) int32_t popup_size __attribute__((swift_name("popup_size")));
@property (readonly) int32_t price __attribute__((swift_name("price")));
@property (readonly) BOOL show_text_with_image __attribute__((swift_name("show_text_with_image")));
@property (readonly) NSString *sku __attribute__((swift_name("sku")));
@property (readonly) NSString *tap_behavior __attribute__((swift_name("tap_behavior")));
@property (readonly) NSString *thumbnail_url __attribute__((swift_name("thumbnail_url")));
@property (readonly) NSString * _Nullable time __attribute__((swift_name("time")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) NSString * _Nullable vm_scripts __attribute__((swift_name("vm_scripts")));
- (instancetype)initWithTitle:(NSString *)title thumbnail_url:(NSString *)thumbnail_url url:(NSString *)url type:(NSString *)type class_type:(NSString *)class_type tap_behavior:(NSString *)tap_behavior open_behavior:(NSString *)open_behavior popup_size:(int32_t)popup_size time:(NSString * _Nullable)time balloon:(NSString * _Nullable)balloon balloon_bg_color:(NSString *)balloon_bg_color balloon_bg_opacity:(int32_t)balloon_bg_opacity balloon_text_color:(NSString *)balloon_text_color balloon_type:(int32_t)balloon_type balloon_size:(int32_t)balloon_size balloon_direction:(int32_t)balloon_direction balloon_font_style:(int32_t)balloon_font_style balloon_font_weight:(int32_t)balloon_font_weight balloon_custom_image_url:(NSString *)balloon_custom_image_url balloon_overflow:(int32_t)balloon_overflow hidden_balloon:(BOOL)hidden_balloon hidden_thumbnail:(BOOL)hidden_thumbnail sku:(NSString *)sku price:(int32_t)price currency_code:(NSString * _Nullable)currency_code custom:(NSString * _Nullable)custom panel:(TMSDKPanel * _Nullable)panel vm_scripts:(NSString * _Nullable)vm_scripts show_text_with_image:(BOOL)show_text_with_image error:(NSString * _Nullable)error __attribute__((swift_name("init(title:thumbnail_url:url:type:class_type:tap_behavior:open_behavior:popup_size:time:balloon:balloon_bg_color:balloon_bg_opacity:balloon_text_color:balloon_type:balloon_size:balloon_direction:balloon_font_style:balloon_font_weight:balloon_custom_image_url:balloon_overflow:hidden_balloon:hidden_thumbnail:sku:price:currency_code:custom:panel:vm_scripts:show_text_with_image:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKItem *)doCopyTitle:(NSString *)title thumbnail_url:(NSString *)thumbnail_url url:(NSString *)url type:(NSString *)type class_type:(NSString *)class_type tap_behavior:(NSString *)tap_behavior open_behavior:(NSString *)open_behavior popup_size:(int32_t)popup_size time:(NSString * _Nullable)time balloon:(NSString * _Nullable)balloon balloon_bg_color:(NSString *)balloon_bg_color balloon_bg_opacity:(int32_t)balloon_bg_opacity balloon_text_color:(NSString *)balloon_text_color balloon_type:(int32_t)balloon_type balloon_size:(int32_t)balloon_size balloon_direction:(int32_t)balloon_direction balloon_font_style:(int32_t)balloon_font_style balloon_font_weight:(int32_t)balloon_font_weight balloon_custom_image_url:(NSString *)balloon_custom_image_url balloon_overflow:(int32_t)balloon_overflow hidden_balloon:(BOOL)hidden_balloon hidden_thumbnail:(BOOL)hidden_thumbnail sku:(NSString *)sku price:(int32_t)price currency_code:(NSString * _Nullable)currency_code custom:(NSString * _Nullable)custom panel:(TMSDKPanel * _Nullable)panel vm_scripts:(NSString * _Nullable)vm_scripts show_text_with_image:(BOOL)show_text_with_image error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(title:thumbnail_url:url:type:class_type:tap_behavior:open_behavior:popup_size:time:balloon:balloon_bg_color:balloon_bg_opacity:balloon_text_color:balloon_type:balloon_size:balloon_direction:balloon_font_style:balloon_font_weight:balloon_custom_image_url:balloon_overflow:hidden_balloon:hidden_thumbnail:sku:price:currency_code:custom:panel:vm_scripts:show_text_with_image:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_bg_color")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_bg_opacity")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_custom_image_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_direction")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_font_style")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_font_weight")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_overflow")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_size")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_text_color")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_type")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="class_type")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency_code")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="custom")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hidden_balloon")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hidden_thumbnail")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="open_behavior")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="panel")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="popup_size")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="price")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_text_with_image")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tap_behavior")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="time")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vm_scripts")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item.Companion")))
@interface TMSDKItemCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKItemCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta")))
@interface TMSDKMeta : TMSDKBase
@property (class, readonly, getter=companion) TMSDKMetaCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) double height __attribute__((swift_name("height")));
@property (readonly) int32_t item_id __attribute__((swift_name("item_id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) double width __attribute__((swift_name("width")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) int32_t z __attribute__((swift_name("z")));
- (instancetype)initWithItem_id:(int32_t)item_id size:(int32_t)size x:(double)x y:(double)y z:(int32_t)z width:(double)width height:(double)height position:(int32_t)position error:(NSString * _Nullable)error __attribute__((swift_name("init(item_id:size:x:y:z:width:height:position:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKMeta *)doCopyItem_id:(int32_t)item_id size:(int32_t)size x:(double)x y:(double)y z:(int32_t)z width:(double)width height:(double)height position:(int32_t)position error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(item_id:size:x:y:z:width:height:position:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="h")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="iid")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pos")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="size")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="w")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="y")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="z")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta.Companion")))
@interface TMSDKMetaCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKMetaCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metabody")))
@interface TMSDKMetabody : TMSDKBase
@property (class, readonly, getter=companion) TMSDKMetabodyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) int32_t interval __attribute__((swift_name("interval")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> * _Nullable next __attribute__((swift_name("next")));
@property (readonly) NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> *now __attribute__((swift_name("now")));
- (instancetype)initWithName:(NSString *)name interval:(int32_t)interval now:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> *)now next:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> * _Nullable)next error:(NSString * _Nullable)error __attribute__((swift_name("init(name:interval:now:next:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKMetabody *)doCopyName:(NSString *)name interval:(int32_t)interval now:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> *)now next:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> * _Nullable)next error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(name:interval:now:next:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="interval")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="now")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metabody.Companion")))
@interface TMSDKMetabodyCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKMetabodyCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata")))
@interface TMSDKMetadata : TMSDKBase
@property (class, readonly, getter=companion) TMSDKMetadataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) TMSDKMetabody *metabody __attribute__((swift_name("metabody")));
@property (readonly) NSString *statuscode __attribute__((swift_name("statuscode")));
- (instancetype)initWithStatuscode:(NSString *)statuscode metabody:(TMSDKMetabody *)metabody error:(NSString * _Nullable)error __attribute__((swift_name("init(statuscode:metabody:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKMetadata *)doCopyStatuscode:(NSString *)statuscode metabody:(TMSDKMetabody *)metabody error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(statuscode:metabody:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata.Companion")))
@interface TMSDKMetadataCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKMetadataCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Panel")))
@interface TMSDKPanel : TMSDKBase
@property (class, readonly, getter=companion) TMSDKPanelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString *image_url __attribute__((swift_name("image_url")));
@property (readonly) NSString *marker_type __attribute__((swift_name("marker_type")));
- (instancetype)initWithImage_url:(NSString *)image_url marker_type:(NSString *)marker_type error:(NSString * _Nullable)error __attribute__((swift_name("init(image_url:marker_type:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKPanel *)doCopyImage_url:(NSString *)image_url marker_type:(NSString *)marker_type error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(image_url:marker_type:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="marker_type")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Panel.Companion")))
@interface TMSDKPanelCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKPanelCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface TMSDKPoint : TMSDKBase
@property (class, readonly, getter=companion) TMSDKPointCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString *event_time __attribute__((swift_name("event_time")));
@property (readonly) NSString *item_group __attribute__((swift_name("item_group")));
@property (readonly) NSString *item_id __attribute__((swift_name("item_id")));
- (instancetype)initWithItem_id:(NSString *)item_id item_group:(NSString *)item_group event_time:(NSString *)event_time error:(NSString * _Nullable)error __attribute__((swift_name("init(item_id:item_group:event_time:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKPoint *)doCopyItem_id:(NSString *)item_id item_group:(NSString *)item_group event_time:(NSString *)event_time error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(item_id:item_group:event_time:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_time")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="item_group")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="item_id")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point.Companion")))
@interface TMSDKPointCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKPointCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Points")))
@interface TMSDKPoints : TMSDKBase
@property (class, readonly, getter=companion) TMSDKPointsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) TMSDKKotlinArray<TMSDKPoint *> *points __attribute__((swift_name("points")));
- (instancetype)initWithPoints:(TMSDKKotlinArray<TMSDKPoint *> *)points error:(NSString * _Nullable)error __attribute__((swift_name("init(points:error:)"))) __attribute__((objc_designated_initializer));
- (TMSDKPoints *)doCopyPoints:(TMSDKKotlinArray<TMSDKPoint *> *)points error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(points:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tig_points")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Points.Companion")))
@interface TMSDKPointsCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKPointsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Video")))
@interface TMSDKVideo : TMSDKBase
@property (class, readonly, getter=companion) TMSDKVideoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) double duration __attribute__((swift_name("duration")));
@property (readonly) NSString *first_frame_image_url __attribute__((swift_name("first_frame_image_url")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString *seek_thumbnail_url __attribute__((swift_name("seek_thumbnail_url")));
@property (readonly) TMSDKBoolean * _Nullable seek_type __attribute__((swift_name("seek_type")));
@property (readonly) TMSDKKotlinArray<NSString *> * _Nullable subtitles __attribute__((swift_name("subtitles")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
- (instancetype)initWithTitle:(NSString *)title url:(NSString *)url duration:(double)duration width:(int32_t)width height:(int32_t)height first_frame_image_url:(NSString *)first_frame_image_url seek_thumbnail_url:(NSString *)seek_thumbnail_url seek_type:(TMSDKBoolean * _Nullable)seek_type subtitles:(TMSDKKotlinArray<NSString *> * _Nullable)subtitles __attribute__((swift_name("init(title:url:duration:width:height:first_frame_image_url:seek_thumbnail_url:seek_type:subtitles:)"))) __attribute__((objc_designated_initializer));
- (TMSDKVideo *)doCopyTitle:(NSString *)title url:(NSString *)url duration:(double)duration width:(int32_t)width height:(int32_t)height first_frame_image_url:(NSString *)first_frame_image_url seek_thumbnail_url:(NSString *)seek_thumbnail_url seek_type:(TMSDKBoolean * _Nullable)seek_type subtitles:(TMSDKKotlinArray<NSString *> * _Nullable)subtitles __attribute__((swift_name("doCopy(title:url:duration:width:height:first_frame_image_url:seek_thumbnail_url:seek_type:subtitles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="first_frame_image_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="seek_thumbnail_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="seek_type")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subtitles")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identifier")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="playlist_url")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Video.Companion")))
@interface TMSDKVideoCompanion : TMSDKBase
@property (class, readonly, getter=shared) TMSDKVideoCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface TMSDK__SkieSuspendWrappersKt : TMSDKBase
+ (void)Skie_Suspend__0__hasNextDispatchReceiver:(TMSDKSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(TMSDKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__1__collectDispatchReceiver:(id<TMSDKKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(TMSDKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__2__emitDispatchReceiver:(id<TMSDKKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(TMSDKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__3__getContentDataDispatchReceiver:(TMSDKTig *)dispatchReceiver jwt:(NSString *)jwt cid:(NSString *)cid suspendHandler:(TMSDKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__3__getContentData(dispatchReceiver:jwt:cid:suspendHandler:)")));
+ (void)Skie_Suspend__4__getMetaDataDispatchReceiver:(TMSDKTig *)dispatchReceiver jwt:(NSString *)jwt cid:(NSString *)cid pagenum:(int32_t)pagenum suspendHandler:(TMSDKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__4__getMetaData(dispatchReceiver:jwt:cid:pagenum:suspendHandler:)")));
+ (void)Skie_Suspend__5__getPointsDataDispatchReceiver:(TMSDKTig *)dispatchReceiver jwt:(NSString *)jwt cid:(NSString *)cid suspendHandler:(TMSDKSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__5__getPointsData(dispatchReceiver:jwt:cid:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface TMSDK__SkieTypeExportsKt : TMSDKBase
+ (void)skieTypeExports_0P0:(TMSDKKotlinx_serialization_corePolymorphicKind *)p0 p1:(TMSDKKotlinx_serialization_corePolymorphicKindOPEN *)p1 p2:(TMSDKKotlinx_serialization_corePolymorphicKindSEALED *)p2 p3:(TMSDKKotlinx_serialization_corePrimitiveKind *)p3 p4:(TMSDKKotlinx_serialization_corePrimitiveKindBOOLEAN *)p4 p5:(TMSDKKotlinx_serialization_corePrimitiveKindBYTE *)p5 p6:(TMSDKKotlinx_serialization_corePrimitiveKindCHAR *)p6 p7:(TMSDKKotlinx_serialization_corePrimitiveKindDOUBLE *)p7 p8:(TMSDKKotlinx_serialization_corePrimitiveKindFLOAT *)p8 p9:(TMSDKKotlinx_serialization_corePrimitiveKindINT *)p9 p10:(TMSDKKotlinx_serialization_corePrimitiveKindLONG *)p10 p11:(TMSDKKotlinx_serialization_corePrimitiveKindSHORT *)p11 p12:(TMSDKKotlinx_serialization_corePrimitiveKindSTRING *)p12 p13:(TMSDKKotlinx_serialization_coreSerialKindCONTEXTUAL *)p13 p14:(TMSDKKotlinx_serialization_coreSerialKindENUM *)p14 p15:(TMSDKKotlinx_serialization_coreStructureKind *)p15 p16:(TMSDKKotlinx_serialization_coreStructureKindCLASS *)p16 p17:(TMSDKKotlinx_serialization_coreStructureKindLIST *)p17 p18:(TMSDKKotlinx_serialization_coreStructureKindMAP *)p18 p19:(TMSDKKotlinx_serialization_coreStructureKindOBJECT *)p19 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface TMSDKKotlinThrowable : TMSDKBase
@property (readonly) TMSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (TMSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface TMSDKKotlinException : TMSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface TMSDKKotlinRuntimeException : TMSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface TMSDKKotlinIllegalStateException : TMSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface TMSDKKotlinCancellationException : TMSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(TMSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol TMSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TMSDKKotlinArray<T> : TMSDKBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TMSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TMSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol TMSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<TMSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<TMSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol TMSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<TMSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<TMSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol TMSDKKotlinx_serialization_coreKSerializer <TMSDKKotlinx_serialization_coreSerializationStrategy, TMSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface TMSDKKotlinx_serialization_coreSerialKind : TMSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface TMSDKKotlinx_serialization_corePolymorphicKind : TMSDKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface TMSDKKotlinx_serialization_corePolymorphicKindOPEN : TMSDKKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface TMSDKKotlinx_serialization_corePolymorphicKindSEALED : TMSDKKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface TMSDKKotlinx_serialization_corePrimitiveKind : TMSDKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindBOOLEAN : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindBYTE : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindCHAR : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindDOUBLE : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindFLOAT : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindINT : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindLONG : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindSHORT : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface TMSDKKotlinx_serialization_corePrimitiveKindSTRING : TMSDKKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface TMSDKKotlinx_serialization_coreSerialKindCONTEXTUAL : TMSDKKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface TMSDKKotlinx_serialization_coreSerialKindENUM : TMSDKKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface TMSDKKotlinx_serialization_coreStructureKind : TMSDKKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface TMSDKKotlinx_serialization_coreStructureKindCLASS : TMSDKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface TMSDKKotlinx_serialization_coreStructureKindLIST : TMSDKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface TMSDKKotlinx_serialization_coreStructureKindMAP : TMSDKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface TMSDKKotlinx_serialization_coreStructureKindOBJECT : TMSDKKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) TMSDKKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol TMSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol TMSDKKotlinx_serialization_coreEncoder
@required
- (id<TMSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<TMSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<TMSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<TMSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<TMSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) TMSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol TMSDKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<TMSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TMSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<TMSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) TMSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol TMSDKKotlinx_serialization_coreDecoder
@required
- (id<TMSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<TMSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (TMSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<TMSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<TMSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) TMSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol TMSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<TMSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TMSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<TMSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) TMSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface TMSDKKotlinx_serialization_coreSerializersModule : TMSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<TMSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TMSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<TMSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<TMSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TMSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TMSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<TMSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<TMSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol TMSDKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol TMSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<TMSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TMSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<TMSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<TMSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) TMSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface TMSDKKotlinNothing : TMSDKBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol TMSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<TMSDKKotlinKClass>)kClass provider:(id<TMSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<TMSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<TMSDKKotlinKClass>)kClass serializer:(id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<TMSDKKotlinKClass>)baseClass actualClass:(id<TMSDKKotlinKClass>)actualClass actualSerializer:(id<TMSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<TMSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<TMSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<TMSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<TMSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<TMSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<TMSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol TMSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol TMSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol TMSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol TMSDKKotlinKClass <TMSDKKotlinKDeclarationContainer, TMSDKKotlinKAnnotatedElement, TMSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
