// Auto Generated.  DO NOT EDIT!



@interface SFApi_StringResp : NSObject

/* 字符串返回值 */
@property (nonatomic, strong) NSString *value;


// 反序列化函数，用于从json字符串反序列化本类型实例
+ (SFApi_StringResp *) deserializeWithJsonData:(NSData *) jsonData;

// 反序列化函数，用于从json节点对象反序列化本类型实例
+ (SFApi_StringResp *) deserialize:(NSDictionary *)json;

// 序列化函数，用于从对象生成数据字典
- (NSMutableDictionary *) serialize;

@end