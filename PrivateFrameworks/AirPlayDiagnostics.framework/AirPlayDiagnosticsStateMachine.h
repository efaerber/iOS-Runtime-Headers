/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPlayDiagnostics.framework/AirPlayDiagnostics
 */

@class AirPlayDiagnosticsIssuesController, NSObject<OS_dispatch_source>, AirPlayDiagnosticsPopoverController, AirPlayDiagnosticsRoutePicker, NSObject<OS_xpc_object>, UIAlertView, AirPlayDiagnosticsFullscreenController, MFMailComposeViewController, NSDictionary, NSString, NSObject<OS_dispatch_semaphore>, NSMutableArray;

@interface AirPlayDiagnosticsStateMachine : NSObject <UIPopoverControllerDelegate> {
    struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; } *_standardAirPlayLogHttpClient;
    struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; } *_mobilityInfoHttpClient;
    NSObject<OS_dispatch_source> *_progressTimer;
    NSString *_reason;
    NSDictionary *_route;
    int _state;
    NSMutableArray *_collectedLogs;
    NSMutableArray *_logErrors;
    AirPlayDiagnosticsPopoverController *_popoverMasterViewController;
    AirPlayDiagnosticsFullscreenController *_fullscreenMasterViewController;
    AirPlayDiagnosticsIssuesController *_issuesContentViewController;
    AirPlayDiagnosticsRoutePicker *_routesContentViewController;
    MFMailComposeViewController *_mailerContentViewController;
    NSObject<OS_xpc_object> *_localLogConnection;
    UIAlertView *_progressDialog;
    UIAlertView *_cancelDialog;
    int _noOfLogsToWait;
    NSObject<OS_dispatch_semaphore> *_internalLock;
    BOOL _canceledLoggingk;
}

@property(retain) NSString * reason;
@property(retain) NSDictionary * route;
@property int state;
@property BOOL canceledLogging;
@property NSObject<OS_xpc_object> * localLogConnection;
@property(retain) NSMutableArray * collectedLogs;
@property(retain) NSMutableArray * logErrors;
@property(retain) AirPlayDiagnosticsPopoverController * popoverMasterViewController;
@property(retain) AirPlayDiagnosticsFullscreenController * fullscreenMasterViewController;
@property(retain) AirPlayDiagnosticsIssuesController * issuesContentViewController;
@property(retain) AirPlayDiagnosticsRoutePicker * routesContentViewController;
@property(retain) MFMailComposeViewController * mailerContentViewController;
@property(retain) UIAlertView * progressDialog;
@property(retain) UIAlertView * cancelDialog;
@property struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }* standardAirPlayLogHttpClient;
@property struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }* mobilityInfoHttpClient;
@property NSObject<OS_dispatch_source> * progressTimer;
@property NSObject<OS_dispatch_semaphore> * internalLock;
@property int noOfLogsToWait;

+ (id)sharedInstance;

- (id)route;
- (void)setRoute:(id)arg1;
- (int)state;
- (void)dealloc;
- (int)noOfLogsToWait;
- (void)setProgressTimer:(id)arg1;
- (id)progressTimer;
- (void)prepareCommonProblems;
- (id)findTopView;
- (void)hideCancelUI;
- (long)fetchRemoteLogWithCommands:(id)arg1 saveAs:(id)arg2 using:(struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }*)arg3;
- (void)setMobilityInfoHttpClient:(struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }*)arg1;
- (struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }*)mobilityInfoHttpClient;
- (void)setStandardAirPlayLogHttpClient:(struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }*)arg1;
- (struct HTTPClientPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; char *x3; int x4; int x5; struct AsyncConnection {} *x6; int x7; int x8; id x9; unsigned char x10; id x11; unsigned char x12; id x13; struct HTTPMessagePrivate {} *x14; struct HTTPMessagePrivate {} **x15; }*)standardAirPlayLogHttpClient;
- (void)cleanupLogContext;
- (BOOL)canceledLogging;
- (long)fetchRemoteMobilityInfo;
- (long)fetchRemoteStandardAirPlayLog;
- (void)abortFetchRemoteLogsIfActive;
- (void)processLogDone:(id)arg1 error:(id)arg2;
- (void)processRemoteLogsFor:(id)arg1 fromRoute:(id)arg2;
- (void)processLocalLogsForViewController:(id)arg1;
- (void)setCollectedLogs:(id)arg1;
- (void)showProgressUI;
- (void)mustNotSleepWhenIdle;
- (void)showCancelUI;
- (void)configureAlertView:(id)arg1;
- (id)progressDialog;
- (void)setProgressDialog:(id)arg1;
- (id)cancelDialog;
- (void)setCancelDialog:(id)arg1;
- (void)closeController:(id)arg1 withParam:(id)arg2 completion:(id)arg3;
- (void)allowSleepWhenIdle;
- (void)hideProgressUI;
- (void)prepareMailer;
- (void)transitFrom:(id)arg1 to:(id)arg2;
- (void)prepareRoutes;
- (void)resetController:(id)arg1;
- (void)cleanupStorage;
- (void)gotoMainThreadState:(int)arg1 fromViewController:(id)arg2 withParam:(id)arg3;
- (void)attachAppSpecificData;
- (id)makeReadableAttachmentName:(id)arg1;
- (id)collectedLogs;
- (void)setLogErrors:(id)arg1;
- (id)logErrors;
- (id)routesContentViewController;
- (id)fullscreenMasterViewController;
- (id)popoverMasterViewController;
- (id)mailerContentViewController;
- (void)setMailerContentViewController:(id)arg1;
- (void)setFullscreenMasterViewController:(id)arg1;
- (void)setRoutesContentViewController:(id)arg1;
- (void)initLogContext;
- (void)setNoOfLogsToWait:(int)arg1;
- (void)setCanceledLogging:(BOOL)arg1;
- (void)setInternalLock:(id)arg1;
- (id)internalLock;
- (id)issuesContentViewController;
- (void)setIssuesContentViewController:(id)arg1;
- (void)abortFetchLogs;
- (void)setPopoverMasterViewController:(id)arg1;
- (void)usePopover:(id)arg1 onViewController:(id)arg2;
- (void)setLocalLogConnection:(id)arg1;
- (id)localLogConnection;
- (void)gotoStateAssociatedWithViewController:(id)arg1;
- (void)haltByViewController:(id)arg1;
- (void)startEngineWithViewController:(id)arg1;
- (id)firstContentViewController;
- (void)goto:(int)arg1 fromViewController:(id)arg2 withParam:(id)arg3;
- (void)processLogsFor:(id)arg1 fromRoute:(id)arg2;
- (id)listAllIssues;
- (BOOL)readyToGo;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)reason;
- (void)unlock;
- (void)lock;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setState:(int)arg1;
- (void)setReason:(id)arg1;

@end