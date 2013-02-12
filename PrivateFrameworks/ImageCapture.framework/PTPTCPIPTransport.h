/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableData, NSString, PTPTCPIPConnection;

@interface PTPTCPIPTransport : PTPTransport {
    PTPTCPIPConnection *_cdConnection;
    NSMutableData *_cdData;
    unsigned int _connectionNumber;
    id _connectionRequestResponse;
    BOOL _delegateNeedsData;
    PTPTCPIPConnection *_eventConnection;
    NSMutableData *_eventData;
    NSString *_hostGUID;
    NSString *_hostName;
    unsigned short _hostPort;
    struct __CFSocket { } *_socket;
    NSString *_targetAddress;
    NSString *_targetGUID;
    NSString *_targetName;
    unsigned int _targetPort;
    PTPTCPIPConnection *_tempConnection;
    NSMutableData *_tempData;
}

- (void)acceptConnectionFromSocket:(int)arg1;
- (void)cancelTransaction:(id)arg1;
- (BOOL)connected;
- (void)dealloc;
- (id)description;
- (void)didCloseConnection:(id)arg1 withError:(struct { int x1; int x2; })arg2;
- (void)handleData:(id)arg1 from:(id)arg2;
- (id)initForAcceptedSocketWithDelegate:(id)arg1 andHostGUID:(id)arg2 andHostName:(id)arg3;
- (id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7;
- (void)releaseConnections;
- (BOOL)sendCancel:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendDataPackets:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (BOOL)sendResponse:(id)arg1;
- (BOOL)sendStartData:(id)arg1;
- (BOOL)startInitiator;
- (BOOL)startResponder;
- (void)stop;
- (id)targetAddress;
- (id)targetGUID;
- (id)targetName;
- (unsigned long)targetPort;
- (BOOL)waitForConnectionWithTimeout:(double)arg1;

@end