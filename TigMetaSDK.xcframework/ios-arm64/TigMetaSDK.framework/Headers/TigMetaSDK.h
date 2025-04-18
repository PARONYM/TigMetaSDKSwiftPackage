#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class TMSDKContent, TMSDKMetadata, TMSDKPoints, TMSDKContentDataResponse, TMSDKMetaDataResponse, TMSDKPointsDataResponse, TMSDKItem, TMSDKKotlinArray<T>, TMSDKContentCompanion, TMSDKGroupCompanion, TMSDKGroup, TMSDKPanel, TMSDKItemCompanion, TMSDKMetaCompanion, TMSDKMeta, TMSDKMetabodyCompanion, TMSDKMetabody, TMSDKMetadataCompanion, TMSDKPanelCompanion, TMSDKPointCompanion, TMSDKPoint, TMSDKPointsCompanion, TMSDKKotlinThrowable, TMSDKKotlinException, TMSDKKotlinRuntimeException, TMSDKKotlinIllegalStateException, TMSDKKotlinx_serialization_coreSerializersModule, TMSDKKotlinx_serialization_coreSerialKind, TMSDKKotlinNothing;

@protocol TMSDKKotlinx_serialization_coreKSerializer, TMSDKKotlinIterator, TMSDKKotlinx_serialization_coreEncoder, TMSDKKotlinx_serialization_coreSerialDescriptor, TMSDKKotlinx_serialization_coreSerializationStrategy, TMSDKKotlinx_serialization_coreDecoder, TMSDKKotlinx_serialization_coreDeserializationStrategy, TMSDKKotlinx_serialization_coreCompositeEncoder, TMSDKKotlinAnnotation, TMSDKKotlinx_serialization_coreCompositeDecoder, TMSDKKotlinx_serialization_coreSerializersModuleCollector, TMSDKKotlinKClass, TMSDKKotlinKDeclarationContainer, TMSDKKotlinKAnnotatedElement, TMSDKKotlinKClassifier;

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
__attribute__((swift_name("ContentDataResponse")))
@interface TMSDKContentDataResponse : TMSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property TMSDKContent * _Nullable data __attribute__((swift_name("data")));
@property NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaDataResponse")))
@interface TMSDKMetaDataResponse : TMSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property TMSDKMetadata * _Nullable data __attribute__((swift_name("data")));
@property NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsDataResponse")))
@interface TMSDKPointsDataResponse : TMSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property TMSDKPoints * _Nullable data __attribute__((swift_name("data")));
@property NSString *message __attribute__((swift_name("message")));
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
- (instancetype)initWithTitle:(NSString *)title description:(NSString * _Nullable)description thumbnail_url:(NSString *)thumbnail_url group_id:(int32_t)group_id group_name:(NSString *)group_name url:(NSString *)url created:(NSString *)created updated:(NSString *)updated items:(TMSDKKotlinArray<TMSDKItem *> *)items custom:(NSString * _Nullable)custom logo_mode:(int32_t)logo_mode logo_image_url:(NSString * _Nullable)logo_image_url logo_link_url:(NSString * _Nullable)logo_link_url ogp_image_url:(NSString * _Nullable)ogp_image_url error:(NSString * _Nullable)error __attribute__((swift_name("init(title:description:thumbnail_url:group_id:group_name:url:created:updated:items:custom:logo_mode:logo_image_url:logo_link_url:ogp_image_url:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKContentCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKContent *)doCopyTitle:(NSString *)title description:(NSString * _Nullable)description thumbnail_url:(NSString *)thumbnail_url group_id:(int32_t)group_id group_name:(NSString *)group_name url:(NSString *)url created:(NSString *)created updated:(NSString *)updated items:(TMSDKKotlinArray<TMSDKItem *> *)items custom:(NSString * _Nullable)custom logo_mode:(int32_t)logo_mode logo_image_url:(NSString * _Nullable)logo_image_url logo_link_url:(NSString * _Nullable)logo_link_url ogp_image_url:(NSString * _Nullable)ogp_image_url error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(title:description:thumbnail_url:group_id:group_name:url:created:updated:items:custom:logo_mode:logo_image_url:logo_link_url:ogp_image_url:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString *created __attribute__((swift_name("created")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="custom")
*/
@property (readonly) NSString * _Nullable custom __attribute__((swift_name("custom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="owner_group_id")
*/
@property (readonly) int32_t group_id __attribute__((swift_name("group_id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="owner_group_name")
*/
@property (readonly) NSString *group_name __attribute__((swift_name("group_name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="items")
*/
@property (readonly) TMSDKKotlinArray<TMSDKItem *> *items __attribute__((swift_name("items")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo_image_url")
*/
@property (readonly) NSString * _Nullable logo_image_url __attribute__((swift_name("logo_image_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo_link_url")
*/
@property (readonly) NSString * _Nullable logo_link_url __attribute__((swift_name("logo_link_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logo_mode")
*/
@property (readonly) int32_t logo_mode __attribute__((swift_name("logo_mode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ogp_image_url")
*/
@property (readonly) NSString * _Nullable ogp_image_url __attribute__((swift_name("ogp_image_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail_url")
*/
@property (readonly) NSString *thumbnail_url __attribute__((swift_name("thumbnail_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_at")
*/
@property (readonly) NSString *updated __attribute__((swift_name("updated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="player_url")
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content.Companion")))
@interface TMSDKContentCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKContentCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Group")))
@interface TMSDKGroup : TMSDKBase
- (instancetype)initWithGid:(int32_t)gid error:(NSString * _Nullable)error __attribute__((swift_name("init(gid:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKGroupCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKGroup *)doCopyGid:(int32_t)gid error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(gid:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gid")
*/
@property (readonly) int32_t gid __attribute__((swift_name("gid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Group.Companion")))
@interface TMSDKGroupCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKGroupCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item")))
@interface TMSDKItem : TMSDKBase
- (instancetype)initWithTitle:(NSString *)title thumbnail_url:(NSString *)thumbnail_url url:(NSString *)url type:(NSString *)type class_type:(NSString *)class_type tap_behavior:(NSString *)tap_behavior open_behavior:(NSString *)open_behavior popup_size:(int32_t)popup_size time:(NSString * _Nullable)time balloon:(NSString * _Nullable)balloon balloon_bg_color:(NSString *)balloon_bg_color balloon_bg_opacity:(int32_t)balloon_bg_opacity balloon_text_color:(NSString *)balloon_text_color balloon_type:(int32_t)balloon_type balloon_size:(int32_t)balloon_size balloon_direction:(int32_t)balloon_direction balloon_font_style:(int32_t)balloon_font_style balloon_font_weight:(int32_t)balloon_font_weight balloon_custom_image_url:(NSString *)balloon_custom_image_url balloon_overflow:(int32_t)balloon_overflow hidden_balloon:(BOOL)hidden_balloon hidden_thumbnail:(BOOL)hidden_thumbnail sku:(NSString *)sku price:(int32_t)price currency_code:(NSString * _Nullable)currency_code custom:(NSString * _Nullable)custom panel:(TMSDKPanel * _Nullable)panel vm_scripts:(NSString * _Nullable)vm_scripts show_text_with_image:(BOOL)show_text_with_image error:(NSString * _Nullable)error __attribute__((swift_name("init(title:thumbnail_url:url:type:class_type:tap_behavior:open_behavior:popup_size:time:balloon:balloon_bg_color:balloon_bg_opacity:balloon_text_color:balloon_type:balloon_size:balloon_direction:balloon_font_style:balloon_font_weight:balloon_custom_image_url:balloon_overflow:hidden_balloon:hidden_thumbnail:sku:price:currency_code:custom:panel:vm_scripts:show_text_with_image:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKItemCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKItem *)doCopyTitle:(NSString *)title thumbnail_url:(NSString *)thumbnail_url url:(NSString *)url type:(NSString *)type class_type:(NSString *)class_type tap_behavior:(NSString *)tap_behavior open_behavior:(NSString *)open_behavior popup_size:(int32_t)popup_size time:(NSString * _Nullable)time balloon:(NSString * _Nullable)balloon balloon_bg_color:(NSString *)balloon_bg_color balloon_bg_opacity:(int32_t)balloon_bg_opacity balloon_text_color:(NSString *)balloon_text_color balloon_type:(int32_t)balloon_type balloon_size:(int32_t)balloon_size balloon_direction:(int32_t)balloon_direction balloon_font_style:(int32_t)balloon_font_style balloon_font_weight:(int32_t)balloon_font_weight balloon_custom_image_url:(NSString *)balloon_custom_image_url balloon_overflow:(int32_t)balloon_overflow hidden_balloon:(BOOL)hidden_balloon hidden_thumbnail:(BOOL)hidden_thumbnail sku:(NSString *)sku price:(int32_t)price currency_code:(NSString * _Nullable)currency_code custom:(NSString * _Nullable)custom panel:(TMSDKPanel * _Nullable)panel vm_scripts:(NSString * _Nullable)vm_scripts show_text_with_image:(BOOL)show_text_with_image error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(title:thumbnail_url:url:type:class_type:tap_behavior:open_behavior:popup_size:time:balloon:balloon_bg_color:balloon_bg_opacity:balloon_text_color:balloon_type:balloon_size:balloon_direction:balloon_font_style:balloon_font_weight:balloon_custom_image_url:balloon_overflow:hidden_balloon:hidden_thumbnail:sku:price:currency_code:custom:panel:vm_scripts:show_text_with_image:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon")
*/
@property (readonly) NSString * _Nullable balloon __attribute__((swift_name("balloon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_bg_color")
*/
@property (readonly) NSString *balloon_bg_color __attribute__((swift_name("balloon_bg_color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_bg_opacity")
*/
@property (readonly) int32_t balloon_bg_opacity __attribute__((swift_name("balloon_bg_opacity")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_custom_image_url")
*/
@property (readonly) NSString *balloon_custom_image_url __attribute__((swift_name("balloon_custom_image_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_direction")
*/
@property (readonly) int32_t balloon_direction __attribute__((swift_name("balloon_direction")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_font_style")
*/
@property (readonly) int32_t balloon_font_style __attribute__((swift_name("balloon_font_style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_font_weight")
*/
@property (readonly) int32_t balloon_font_weight __attribute__((swift_name("balloon_font_weight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_overflow")
*/
@property (readonly) int32_t balloon_overflow __attribute__((swift_name("balloon_overflow")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_size")
*/
@property (readonly) int32_t balloon_size __attribute__((swift_name("balloon_size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_text_color")
*/
@property (readonly) NSString *balloon_text_color __attribute__((swift_name("balloon_text_color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balloon_type")
*/
@property (readonly) int32_t balloon_type __attribute__((swift_name("balloon_type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="class_type")
*/
@property (readonly) NSString *class_type __attribute__((swift_name("class_type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency_code")
*/
@property (readonly) NSString * _Nullable currency_code __attribute__((swift_name("currency_code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="custom")
*/
@property (readonly) NSString * _Nullable custom __attribute__((swift_name("custom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hidden_balloon")
*/
@property (readonly) BOOL hidden_balloon __attribute__((swift_name("hidden_balloon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hidden_thumbnail")
*/
@property (readonly) BOOL hidden_thumbnail __attribute__((swift_name("hidden_thumbnail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="open_behavior")
*/
@property (readonly) NSString *open_behavior __attribute__((swift_name("open_behavior")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="panel")
*/
@property (readonly) TMSDKPanel * _Nullable panel __attribute__((swift_name("panel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="popup_size")
*/
@property (readonly) int32_t popup_size __attribute__((swift_name("popup_size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="price")
*/
@property (readonly) int32_t price __attribute__((swift_name("price")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_text_with_image")
*/
@property (readonly) BOOL show_text_with_image __attribute__((swift_name("show_text_with_image")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
*/
@property (readonly) NSString *sku __attribute__((swift_name("sku")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tap_behavior")
*/
@property (readonly) NSString *tap_behavior __attribute__((swift_name("tap_behavior")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail_url")
*/
@property (readonly) NSString *thumbnail_url __attribute__((swift_name("thumbnail_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="time")
*/
@property (readonly) NSString * _Nullable time __attribute__((swift_name("time")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vm_scripts")
*/
@property (readonly) NSString * _Nullable vm_scripts __attribute__((swift_name("vm_scripts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Item.Companion")))
@interface TMSDKItemCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKItemCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta")))
@interface TMSDKMeta : TMSDKBase
- (instancetype)initWithItem_id:(int32_t)item_id size:(int32_t)size x:(double)x y:(double)y z:(int32_t)z width:(double)width height:(double)height position:(int32_t)position error:(NSString * _Nullable)error __attribute__((swift_name("init(item_id:size:x:y:z:width:height:position:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKMetaCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKMeta *)doCopyItem_id:(int32_t)item_id size:(int32_t)size x:(double)x y:(double)y z:(int32_t)z width:(double)width height:(double)height position:(int32_t)position error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(item_id:size:x:y:z:width:height:position:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="h")
*/
@property (readonly) double height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="iid")
*/
@property (readonly) int32_t item_id __attribute__((swift_name("item_id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pos")
*/
@property (readonly) int32_t position __attribute__((swift_name("position")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="size")
*/
@property (readonly) int32_t size __attribute__((swift_name("size")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="w")
*/
@property (readonly) double width __attribute__((swift_name("width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x")
*/
@property (readonly) double x __attribute__((swift_name("x")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="y")
*/
@property (readonly) double y __attribute__((swift_name("y")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="z")
*/
@property (readonly) int32_t z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta.Companion")))
@interface TMSDKMetaCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metabody")))
@interface TMSDKMetabody : TMSDKBase
- (instancetype)initWithName:(NSString *)name interval:(int32_t)interval now:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> *)now next:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> * _Nullable)next error:(NSString * _Nullable)error __attribute__((swift_name("init(name:interval:now:next:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKMetabodyCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKMetabody *)doCopyName:(NSString *)name interval:(int32_t)interval now:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> *)now next:(NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> * _Nullable)next error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(name:interval:now:next:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="interval")
*/
@property (readonly) int32_t interval __attribute__((swift_name("interval")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString *name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next")
*/
@property (readonly) NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> * _Nullable next __attribute__((swift_name("next")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="now")
*/
@property (readonly) NSDictionary<NSString *, NSDictionary<NSString *, TMSDKMeta *> *> *now __attribute__((swift_name("now")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metabody.Companion")))
@interface TMSDKMetabodyCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKMetabodyCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata")))
@interface TMSDKMetadata : TMSDKBase
- (instancetype)initWithStatuscode:(NSString *)statuscode metabody:(TMSDKMetabody *)metabody error:(NSString * _Nullable)error __attribute__((swift_name("init(statuscode:metabody:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKMetadataCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKMetadata *)doCopyStatuscode:(NSString *)statuscode metabody:(TMSDKMetabody *)metabody error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(statuscode:metabody:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property (readonly) TMSDKMetabody *metabody __attribute__((swift_name("metabody")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statusCode")
*/
@property (readonly) NSString *statuscode __attribute__((swift_name("statuscode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata.Companion")))
@interface TMSDKMetadataCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Panel")))
@interface TMSDKPanel : TMSDKBase
- (instancetype)initWithImage_url:(NSString *)image_url marker_type:(NSString *)marker_type error:(NSString * _Nullable)error __attribute__((swift_name("init(image_url:marker_type:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKPanelCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKPanel *)doCopyImage_url:(NSString *)image_url marker_type:(NSString *)marker_type error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(image_url:marker_type:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_url")
*/
@property (readonly) NSString *image_url __attribute__((swift_name("image_url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="marker_type")
*/
@property (readonly) NSString *marker_type __attribute__((swift_name("marker_type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Panel.Companion")))
@interface TMSDKPanelCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKPanelCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface TMSDKPoint : TMSDKBase
- (instancetype)initWithItem_id:(NSString *)item_id item_group:(NSString *)item_group event_time:(NSString *)event_time error:(NSString * _Nullable)error __attribute__((swift_name("init(item_id:item_group:event_time:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKPointCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKPoint *)doCopyItem_id:(NSString *)item_id item_group:(NSString *)item_group event_time:(NSString *)event_time error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(item_id:item_group:event_time:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_time")
*/
@property (readonly) NSString *event_time __attribute__((swift_name("event_time")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="item_group")
*/
@property (readonly) NSString *item_group __attribute__((swift_name("item_group")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="item_id")
*/
@property (readonly) NSString *item_id __attribute__((swift_name("item_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point.Companion")))
@interface TMSDKPointCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKPointCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Points")))
@interface TMSDKPoints : TMSDKBase
- (instancetype)initWithPoints:(TMSDKKotlinArray<TMSDKPoint *> *)points error:(NSString * _Nullable)error __attribute__((swift_name("init(points:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) TMSDKPointsCompanion *companion __attribute__((swift_name("companion")));
- (TMSDKPoints *)doCopyPoints:(TMSDKKotlinArray<TMSDKPoint *> *)points error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(points:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tig_points")
*/
@property (readonly) TMSDKKotlinArray<TMSDKPoint *> *points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Points.Companion")))
@interface TMSDKPointsCompanion : TMSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) TMSDKPointsCompanion *shared __attribute__((swift_name("shared")));
- (id<TMSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface TMSDKKotlinThrowable : TMSDKBase
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
@property (readonly) TMSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface TMSDKKotlinArray<T> : TMSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(TMSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<TMSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
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


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface TMSDKKotlinx_serialization_coreSerialKind : TMSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
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
