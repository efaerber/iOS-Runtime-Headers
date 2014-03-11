/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKUIEventStatusButtonsViewDelegate>, NSArray, UIButton;

@interface EKUIEventStatusButtonsView : UIView {
    NSArray *_buttonTitleStrings;
    NSArray *_buttons;
    float _buttonsCharge;
    float _cachedFittingFontSize;
    <EKUIEventStatusButtonsViewDelegate> *_delegate;
    int _selectedButtonIndex;
    int _textSizeMode;
}

@property(retain) NSArray * buttonTitleStrings;
@property float buttonsCharge;
@property(readonly) UIButton * centerButton;
@property <EKUIEventStatusButtonsViewDelegate> * delegate;
@property int selectedButtonIndex;
@property int textSizeMode;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (float)_defaultFontSizeForButtons;
- (id)_fontForButton:(id)arg1 withSize:(float)arg2;
- (float)_minimumFontSize;
- (void)_setupButtons;
- (id)_toolbarButtonWithTitle:(id)arg1;
- (void)_updateButtonFontsWithSize:(float)arg1;
- (void)_updateSelectionToButton:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)buttonTitleStrings;
- (float)buttonsCharge;
- (id)centerButton;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 buttonTitleStrings:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (int)selectedButtonIndex;
- (void)setButtonTitleStrings:(id)arg1;
- (void)setButtonsCharge:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedButtonIndex:(int)arg1;
- (void)setTextSizeMode:(int)arg1;
- (int)textSizeMode;
- (void)updateForMiniBarState:(BOOL)arg1;

@end