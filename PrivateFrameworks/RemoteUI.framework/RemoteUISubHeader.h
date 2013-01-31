/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UILabel;

@interface RemoteUISubHeader : UIView <RemoteUITableHeader> {
    UILabel *_headerLabel;
    UILabel *_subHeaderLabel;
    float _subHeaderSized;
    BOOL _isFirstSection;
}


- (void)dealloc;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)setSectionIsFirst:(BOOL)arg1;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;

@end