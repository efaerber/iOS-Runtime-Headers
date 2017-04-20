/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell {
    int  _animationPauseReasons;
    UILabel * _drawerLabel;
    NSAttributedString * _drawerText;
    BOOL  _drawerTextChanged;
    struct CGSize { 
        float width; 
        float height; 
    }  _drawerTextSize;
    BOOL  _drawerWasVisible;
    struct CGSize { 
        float width; 
        float height; 
    }  _messageDisplayViewRequestedSize;
}

@property (nonatomic) int animationPauseReasons;
@property (nonatomic, retain) UILabel *drawerLabel;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawerLabelFrame;
@property (nonatomic, copy) NSAttributedString *drawerText;
@property (nonatomic) BOOL drawerTextChanged;
@property (nonatomic) struct CGSize { float x1; float x2; } drawerTextSize;
@property (nonatomic) BOOL drawerWasVisible;
@property (readonly) UIView *messageDisplayView;
@property (nonatomic) struct CGSize { float x1; float x2; } messageDisplayViewRequestedSize;

- (void).cxx_destruct;
- (int)animationPauseReasons;
- (void)configureForChatItem:(id)arg1;
- (id)drawerLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawerLabelFrame;
- (id)drawerText;
- (BOOL)drawerTextChanged;
- (struct CGSize { float x1; float x2; })drawerTextSize;
- (BOOL)drawerWasVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (id)messageDisplayView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })messageDisplayViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGSize { float x1; float x2; })messageDisplayViewRequestedSize;
- (void)setAnimationPauseReasons:(int)arg1;
- (void)setDrawerLabel:(id)arg1;
- (void)setDrawerText:(id)arg1;
- (void)setDrawerTextChanged:(BOOL)arg1;
- (void)setDrawerTextSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDrawerWasVisible:(BOOL)arg1;
- (void)setMessageDisplayViewRequestedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)willLayoutDrawerLabelFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;

@end