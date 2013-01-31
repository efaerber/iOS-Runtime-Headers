/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSNumber;

@interface CBConcreteService : CBService  {
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

@property(readonly) NSNumber * startHandle;
@property(readonly) NSNumber * endHandle;


- (void)invalidate;
- (void)dealloc;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (id)initWithPeripheral:(id)arg1 primary:(BOOL)arg2 UUID:(id)arg3 startHandle:(id)arg4 endHandle:(id)arg5;
- (id)endHandle;
- (id)startHandle;

@end