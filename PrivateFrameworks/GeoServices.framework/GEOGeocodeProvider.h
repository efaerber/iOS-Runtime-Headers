/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOGeocodeProvider : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _successHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

}

@property(copy) id successHandler;
@property(copy) id errorHandler;

+ (unsigned short)provider;
+ (id)providerName;

- (void)cancel;
- (void)dealloc;
- (void)setSuccessHandler:(id)arg1;
- (id)successHandler;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)setErrorHandler:(id)arg1;
- (id)errorHandler;

@end