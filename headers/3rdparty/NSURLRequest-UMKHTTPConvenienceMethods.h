//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLRequest.h"

@interface NSURLRequest (UMKHTTPConvenienceMethods)
- (id)umk_HTTPBodyData;
- (BOOL)umk_HTTPHeadersAreEqualToHeaders:(id)arg1;
- (id)umk_JSONObjectFromHTTPBody;
- (id)umk_parametersFromURLEncodedHTTPBody;
- (id)umk_stringFromHTTPBody;
- (id)umk_stringFromHTTPBodyWithEncoding:(unsigned int)arg1;
@end

