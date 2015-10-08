//
//  NSString+libxml.h
//  TKit
//
//  Created by bill on 12-12-21.
//  Copyright (c) 2012年 _Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface NSString (parse)

#define  HAS_GDATAXML_SRC 1

#ifdef  HAS_GDATAXML_SRC
    /// 解析XML  【param: xml 数据】  【returns: 字典或者数组】
    - (id)XML2Value;
#endif

/// 解析JSON 【param: json 数据】 【returns: 字典或者数组】
- (id)JSON2Value;

@end

@interface NSObject (NSObject_JSONSerialization)

- (NSData *)JSONData;
- (NSString *)JSONStr;

@end

#ifdef  HAS_GDATAXML_SRC

  #import "GDataXMLNode.h"

    @interface GDataXMLNode (children)

    - (BOOL)hasSameChild;

    @end
#endif