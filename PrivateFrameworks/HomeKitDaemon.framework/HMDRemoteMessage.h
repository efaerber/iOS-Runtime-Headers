/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessage : HMFMessage {
    unsigned int  _restriction;
    BOOL  _secure;
    HMDHomeKitVersion * _sourceVersion;
    double  _timeout;
    NSUUID * _transactionIdentifier;
    int  _type;
}

@property (nonatomic) unsigned int restriction;
@property (getter=isSecure, nonatomic) BOOL secure;
@property (nonatomic, retain) HMDHomeKitVersion *sourceVersion;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, copy) NSUUID *transactionIdentifier;
@property (nonatomic) int type;

+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(int)arg4 timeout:(double)arg5 secure:(BOOL)arg6;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(int)arg4 timeout:(double)arg5 secure:(BOOL)arg6 restriction:(unsigned int)arg7;
- (BOOL)isRemoteSource;
- (BOOL)isSecure;
- (unsigned int)restriction;
- (void)setInternalResponseHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setRestriction:(unsigned int)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (id)sourceVersion;
- (double)timeout;
- (id)transactionIdentifier;
- (int)type;

@end