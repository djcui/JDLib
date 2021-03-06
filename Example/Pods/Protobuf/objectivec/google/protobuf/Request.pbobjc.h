// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Request.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - RequestRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface RequestRoot : GPBRootObject
@end

@interface RequestRoot (DynamicMethods)
+ (GPBExtensionDescriptor *)chatMessage;
+ (GPBExtensionDescriptor *)chatImage;
+ (GPBExtensionDescriptor *)createConversation;
+ (GPBExtensionDescriptor *)chatMessageList;
@end

#pragma mark - Request

typedef GPB_ENUM(Request_FieldNumber) {
  Request_FieldNumber_Cmd = 1,
  Request_FieldNumber_Dct = 2,
};

///消息请求 
@interface Request : GPBMessage

///对应的HandlerID
@property(nonatomic, readwrite) int32_t cmd;

@property(nonatomic, readwrite) BOOL hasCmd;
///对应的ApiId
@property(nonatomic, readwrite) int32_t dct;

@property(nonatomic, readwrite) BOOL hasDct;
@end

#pragma mark - CreateConversationReq

typedef GPB_ENUM(CreateConversationReq_FieldNumber) {
  CreateConversationReq_FieldNumber_Clientid = 1,
  CreateConversationReq_FieldNumber_Puid = 2,
  CreateConversationReq_FieldNumber_DeviceType = 3,
  CreateConversationReq_FieldNumber_Attributes = 4,
  CreateConversationReq_FieldNumber_RequestId = 5,
};

///创建会话
///\@param cmd：1001
///\@param dct: 1001003
///\@return: response_protocol=1001003
@interface CreateConversationReq : GPBMessage

///jodouid
@property(nonatomic, readwrite, copy, null_resettable) NSString *clientid;
/// Test to see if @c clientid has been set.
@property(nonatomic, readwrite) BOOL hasClientid;

///puid
@property(nonatomic, readwrite, copy, null_resettable) NSString *puid;
/// Test to see if @c puid has been set.
@property(nonatomic, readwrite) BOOL hasPuid;

///设备类型,ios/android
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceType;
/// Test to see if @c deviceType has been set.
@property(nonatomic, readwrite) BOOL hasDeviceType;

///用户信息,json格式：
///{"networkType":"13","phoneType":"iPad","imei":"NULL","phoneVersion":"iPhone OS9.3.1","roleName":"加德納伊琳","cpid":"shjibei","globalCode":3,"jodoUID":"","serverName":"Jodo-1","type":"0","gameid":"koudaixunlianshiios","wifi":"1","gameuid":"2f329af75a708a3d85ce0a820c1e43d4","accountName":"加德納伊琳","email":"","deviceType":1,"sdkversion":"1.4.1","gameVc":"0.6.1","channel":"ios01","gamePkg":"ioa.pimon.scol.xh"}
@property(nonatomic, readwrite, copy, null_resettable) NSString *attributes;
/// Test to see if @c attributes has been set.
@property(nonatomic, readwrite) BOOL hasAttributes;

///requestId
@property(nonatomic, readwrite, copy, null_resettable) NSString *requestId;
/// Test to see if @c requestId has been set.
@property(nonatomic, readwrite) BOOL hasRequestId;

@end

#pragma mark - ChatMessageReq

typedef GPB_ENUM(ChatMessageReq_FieldNumber) {
  ChatMessageReq_FieldNumber_Covnid = 1,
  ChatMessageReq_FieldNumber_Message = 2,
  ChatMessageReq_FieldNumber_Flag = 3,
  ChatMessageReq_FieldNumber_RequestId = 4,
};

///发送消息
///\@param cmd:1001
///\@param dct:1001001
///\@return response_protocol=1001001
@interface ChatMessageReq : GPBMessage

///会话ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *covnid;
/// Test to see if @c covnid has been set.
@property(nonatomic, readwrite) BOOL hasCovnid;

///消息内容,json格式，参考leancould的协议
@property(nonatomic, readwrite, copy, null_resettable) NSString *message;
/// Test to see if @c message has been set.
@property(nonatomic, readwrite) BOOL hasMessage;

///消息来源,1-玩家发的,2-客服发的
@property(nonatomic, readwrite) int32_t flag;

@property(nonatomic, readwrite) BOOL hasFlag;
///requestId
@property(nonatomic, readwrite, copy, null_resettable) NSString *requestId;
/// Test to see if @c requestId has been set.
@property(nonatomic, readwrite) BOOL hasRequestId;

@end

#pragma mark - ChatImageReq

typedef GPB_ENUM(ChatImageReq_FieldNumber) {
  ChatImageReq_FieldNumber_Covnid = 1,
  ChatImageReq_FieldNumber_Rolename = 2,
  ChatImageReq_FieldNumber_Image = 3,
  ChatImageReq_FieldNumber_RequestId = 4,
};

///发送图片
///\@param cmd:1001
///\@param dct:1001002
///\@return response_protocol=1001006
@interface ChatImageReq : GPBMessage

///会话ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *covnid;
/// Test to see if @c covnid has been set.
@property(nonatomic, readwrite) BOOL hasCovnid;

///角色名
@property(nonatomic, readwrite, copy, null_resettable) NSString *rolename;
/// Test to see if @c rolename has been set.
@property(nonatomic, readwrite) BOOL hasRolename;

///图片二进制数组
@property(nonatomic, readwrite, copy, null_resettable) NSData *image;
/// Test to see if @c image has been set.
@property(nonatomic, readwrite) BOOL hasImage;

///requestId
@property(nonatomic, readwrite, copy, null_resettable) NSString *requestId;
/// Test to see if @c requestId has been set.
@property(nonatomic, readwrite) BOOL hasRequestId;

@end

#pragma mark - ChatMessageListReq

typedef GPB_ENUM(ChatMessageListReq_FieldNumber) {
  ChatMessageListReq_FieldNumber_Convid = 1,
  ChatMessageListReq_FieldNumber_Clientid = 2,
  ChatMessageListReq_FieldNumber_Puid = 3,
  ChatMessageListReq_FieldNumber_DeviceType = 4,
  ChatMessageListReq_FieldNumber_RequestId = 5,
};

///拉取历史记录
///\@param cmd:1001
///\@param dct:1001004
///\@return response_protocol=1001004
@interface ChatMessageListReq : GPBMessage

///会话ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *convid;
/// Test to see if @c convid has been set.
@property(nonatomic, readwrite) BOOL hasConvid;

///jodouid
@property(nonatomic, readwrite, copy, null_resettable) NSString *clientid;
/// Test to see if @c clientid has been set.
@property(nonatomic, readwrite) BOOL hasClientid;

///puid
@property(nonatomic, readwrite, copy, null_resettable) NSString *puid;
/// Test to see if @c puid has been set.
@property(nonatomic, readwrite) BOOL hasPuid;

///设备类型
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceType;
/// Test to see if @c deviceType has been set.
@property(nonatomic, readwrite) BOOL hasDeviceType;

///requestId
@property(nonatomic, readwrite, copy, null_resettable) NSString *requestId;
/// Test to see if @c requestId has been set.
@property(nonatomic, readwrite) BOOL hasRequestId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
