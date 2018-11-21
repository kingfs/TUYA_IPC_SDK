/*********************************************************************************
  *Copyright(C),2017, 涂鸦科技 www.tuya.comm
  *FileName:    tuya_cloud_error_code.h
**********************************************************************************/


#ifndef TUYA_CLOUD_ERROR_CODE_H
#define TUYA_CLOUD_ERROR_CODE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef int OPERATE_RET; // 操作结果返回值

#define INCREMENT(x,n) (x+n) // 增量

#define OPRT_COMMON_START 								0 // 通用返回值开始
#define OPRT_OK 										INCREMENT(OPRT_COMMON_START,0)              // 执行成功
#define OPRT_COM_ERROR 									INCREMENT(OPRT_COMMON_START,1)       // 通用错误
#define OPRT_INVALID_PARM 								INCREMENT(OPRT_COMMON_START,2)    // 无效的入参
#define OPRT_MALLOC_FAILED 								INCREMENT(OPRT_COMMON_START,3)   // 内存分配失败
#define OPRT_NETWORK_ERROR 								INCREMENT(OPRT_COMMON_START,4)   // 网络传输错误
#define OPRT_COMMON_END 								OPRT_NETWORK_ERROR // 通用返回值结束

// 应用程序框架用户通用返回起始值
#define OPRT_USER_START 								INCREMENT(OPRT_COMMON_END,1)

#define OPRT_SYS_ERR_START 								OPRT_USER_START // 5
#define OPRT_INIT_MUTEX_ATTR_FAILED 					INCREMENT(OPRT_SYS_ERR_START,0)    // 初始化同步属性失败
#define OPRT_SET_MUTEX_ATTR_FAILED 						INCREMENT(OPRT_SYS_ERR_START,1)     // 设置同步属性失败
#define OPRT_DESTROY_MUTEX_ATTR_FAILED 					INCREMENT(OPRT_SYS_ERR_START,2) // 销毁同步属性失败
#define OPRT_INIT_MUTEX_FAILED 							INCREMENT(OPRT_SYS_ERR_START,3)         // 初始化互斥量失败
#define OPRT_MUTEX_LOCK_FAILED 							INCREMENT(OPRT_SYS_ERR_START,4)         // 互斥量加锁失败
#define OPRT_MUTEX_TRYLOCK_FAILED 						INCREMENT(OPRT_SYS_ERR_START,5)      // 互斥量尝试加锁失败
#define OPRT_MUTEX_LOCK_BUSY 							INCREMENT(OPRT_SYS_ERR_START,6)           // 互斥量忙
#define OPRT_MUTEX_UNLOCK_FAILED 						INCREMENT(OPRT_SYS_ERR_START,7)       // 互斥量解锁失败
#define OPRT_MUTEX_RELEASE_FAILED 						INCREMENT(OPRT_SYS_ERR_START,8)      // 互斥量释放失败
#define OPRT_INIT_SEM_FAILED 							INCREMENT(OPRT_SYS_ERR_START,9) // 初始化信号量失败
#define OPRT_WAIT_SEM_FAILED 							INCREMENT(OPRT_SYS_ERR_START,10) // 等待信号量失败
#define OPRT_POST_SEM_FAILED 							INCREMENT(OPRT_SYS_ERR_START,11) // 释放信号量失败
#define OPRT_THRD_STA_UNVALID 							INCREMENT(OPRT_SYS_ERR_START,12)  // 线程状态非法
#define OPRT_THRD_CR_FAILED 							INCREMENT(OPRT_SYS_ERR_START,13)    // 线程创建失败
#define OPRT_THRD_JOIN_FAILED 							INCREMENT(OPRT_SYS_ERR_START,14)  // 线程JOIN函数调用失败
#define OPRT_THRD_SELF_CAN_NOT_JOIN 					INCREMENT(OPRT_SYS_ERR_START,15) // 自身线程不能调用JOIN函数
#define OPRT_TIMERID_EXIST 								INCREMENT(OPRT_SYS_ERR_START,16)     // 定时器ID已存在
#define OPRT_TIMERID_NOT_FOUND 							INCREMENT(OPRT_SYS_ERR_START,17) // 未找到指定定时器ID
#define OPRT_TIMERID_UNVALID 							INCREMENT(OPRT_SYS_ERR_START,18) // 定时器ID非法
#define OPRT_GET_IDLE_TIMERID_ERROR 					INCREMENT(OPRT_SYS_ERR_START,19) // 获取空闲定时器ID错误
#define OPRT_MSG_NOT_FOUND 								INCREMENT(OPRT_SYS_ERR_START,20)  // 未找到指定消息
#define OPRT_MSG_LIST_EMPTY 							INCREMENT(OPRT_SYS_ERR_START,21) // 消息链空
#define OPRT_PSM_FLH_RET_ERR 							INCREMENT(OPRT_SYS_ERR_START,22)
#define OPRT_PSM_FLH_TM_ERR 							INCREMENT(OPRT_SYS_ERR_START,23)
#define OPRT_PSM_E_INVAL 								INCREMENT(OPRT_SYS_ERR_START,24)
#define OPRT_PSM_E_IO 									INCREMENT(OPRT_SYS_ERR_START,25)
#define OPRT_PSM_E_EXIST 								INCREMENT(OPRT_SYS_ERR_START,26)
#define OPRT_PSM_E_NOENT 								INCREMENT(OPRT_SYS_ERR_START,27)
#define OPRT_PSM_FAIL 									INCREMENT(OPRT_SYS_ERR_START,28)
#define OPRT_PSM_E_NOSPC 								INCREMENT(OPRT_SYS_ERR_START,29)
#define OPRT_PSM_E_METADATA_CRC 						INCREMENT(OPRT_SYS_ERR_START,30)
#define OPRT_PSM_E_CRC 									INCREMENT(OPRT_SYS_ERR_START,31)
#define OPRT_WIFI_SCAN_FAIL 							INCREMENT(OPRT_SYS_ERR_START,32)
#define OPRT_WF_MAC_SET_FAIL 							INCREMENT(OPRT_SYS_ERR_START,33)
#define OPRT_WF_CONN_FAIL 								INCREMENT(OPRT_SYS_ERR_START,34)
#define OPRT_WF_NW_CFG_FAIL 							INCREMENT(OPRT_SYS_ERR_START,35)
#define OPRT_SYS_ERR_END 								OPRT_WF_NW_CFG_FAIL


#define OPRT_EC_START 									INCREMENT(OPRT_SYS_ERR_END,1) // 41
#define OPRT_SOCK_ERR 									INCREMENT(OPRT_EC_START,0) 
#define OPRT_SET_SOCK_ERR 								INCREMENT(OPRT_EC_START,1)
#define OPRT_SOCK_CONN_ERR 								INCREMENT(OPRT_EC_START,2)
#define OPRT_CR_MUTEX_ERR 								INCREMENT(OPRT_EC_START,3)
#define OPRT_CR_TIMER_ERR 								INCREMENT(OPRT_EC_START,4)
#define OPRT_CR_THREAD_ERR 								INCREMENT(OPRT_EC_START,5)
#define OPRT_BUF_NOT_ENOUGH 							INCREMENT(OPRT_EC_START,6)
#define OPRT_URL_PARAM_OUT_LIMIT 						INCREMENT(OPRT_EC_START,7)
#define OPRT_HTTP_OS_ERROR 								INCREMENT(OPRT_EC_START,8)
#define OPRT_HTTP_PR_REQ_ERROR 							INCREMENT(OPRT_EC_START,9)
#define OPRT_HTTP_SD_REQ_ERROR 							INCREMENT(OPRT_EC_START,10)
#define OPRT_HTTP_RD_ERROR 								INCREMENT(OPRT_EC_START,11)
#define OPRT_HTTP_AD_HD_ERROR 							INCREMENT(OPRT_EC_START,12)
#define OPRT_HTTP_GET_RESP_ERROR 						INCREMENT(OPRT_EC_START,13)
#define OPRT_HTTP_AES_INIT_ERR 							INCREMENT(OPRT_EC_START,14)
#define OPRT_HTTP_AES_OPEN_ERR 							INCREMENT(OPRT_EC_START,15)
#define OPRT_HTTP_AES_SET_KEY_ERR 						INCREMENT(OPRT_EC_START,16)
#define OPRT_HTTP_AES_ENCRYPT_ERR 						INCREMENT(OPRT_EC_START,17)
#define OPRT_TY_WS_PART_ERR 							INCREMENT(OPRT_EC_START,18)
#define OPRT_CR_CJSON_ERR 								INCREMENT(OPRT_EC_START,19)
#define OPRT_PSM_SET_ERROR 								INCREMENT(OPRT_EC_START,20)
#define OPRT_PSM_GET_ERROR 								INCREMENT(OPRT_EC_START,21)
#define OPRT_CJSON_PARSE_ERR 							INCREMENT(OPRT_EC_START,22)
#define OPRT_CJSON_GET_ERR 								INCREMENT(OPRT_EC_START,23)
#define OPRT_CR_HTTP_URL_H_ERR 							INCREMENT(OPRT_EC_START,24)
#define OPRT_HTTPS_HANDLE_FAIL 							INCREMENT(OPRT_EC_START,25)
#define OPRT_HTTPS_RESP_UNVALID 						INCREMENT(OPRT_EC_START,26)
#define OPRT_MEM_PARTITION_EMPTY 						INCREMENT(OPRT_EC_START,27)
#define OPRT_MEM_PARTITION_FULL 						INCREMENT(OPRT_EC_START,28)
#define OPRT_MEM_PARTITION_NOT_FOUND 					INCREMENT(OPRT_EC_START,29)
#define OPRT_CR_QUE_ERR 								INCREMENT(OPRT_EC_START,30)
#define OPRT_SND_QUE_ERR 								INCREMENT(OPRT_EC_START,31)
#define OPRT_NOT_FOUND_DEV 								INCREMENT(OPRT_EC_START,32)
#define OPRT_NOT_FOUND_DEV_DP 							INCREMENT(OPRT_EC_START,33)
#define OPRT_DP_ATTR_ILLEGAL 							INCREMENT(OPRT_EC_START,34)
#define OPRT_DP_TYPE_PROP_ILLEGAL 						INCREMENT(OPRT_EC_START,35) // dp type property illegal
#define OPRT_DP_REPORT_CLOUD_ERR 						INCREMENT(OPRT_EC_START,36)
#define OPRT_NO_NEED_SET_PRODINFO 						INCREMENT(OPRT_EC_START,37)
#define OPRT_NW_INVALID 								INCREMENT(OPRT_EC_START,38)
#define OPRT_SELECT_ERR 								INCREMENT(OPRT_EC_START,39)
#define OPRT_SELECT_TM 									INCREMENT(OPRT_EC_START,40) // select timeout
#define OPRT_SEND_ERR 									INCREMENT(OPRT_EC_START,41)
#define OPRT_DEV_NOT_BIND 								INCREMENT(OPRT_EC_START,42)
#define OPRT_FW_UG_FAILED 								INCREMENT(OPRT_EC_START,43)
#define OPRT_VER_FMT_ERR 								INCREMENT(OPRT_EC_START,44)
#define OPRT_FW_NOT_EXIST 								INCREMENT(OPRT_EC_START,45)
#define OPRT_SEM_CR_ERR 								INCREMENT(OPRT_EC_START,46)
#define OPRT_SELECT_TIMEOUT 							INCREMENT(OPRT_EC_START,47)
#define OPRT_GW_MQ_OFFLILNE 							INCREMENT(OPRT_EC_START,48)
#define OPRT_NOT_SPT_CLX_DP 							INCREMENT(OPRT_EC_START,49)
#define OPRT_RECV_ERR 									INCREMENT(OPRT_EC_START,50)
#define OPRT_UG_PKG_NOT_ENOUGH 							INCREMENT(OPRT_EC_START,51)
#define OPRT_SCMA_INVALID 								INCREMENT(OPRT_EC_START,52)
#define OPRT_PRODECT_KEY_NULL 							INCREMENT(OPRT_EC_START,53)
#define OPRT_DEVICE_VER_NULL 							INCREMENT(OPRT_EC_START,54)
#define OPRT_MSG_OUT_OF_LMT 							INCREMENT(OPRT_EC_START,55)
#define OPRT_NOT_FOUND_AUTH_SSID 						INCREMENT(OPRT_EC_START,56)
#define OPRT_SOCKET_FAULT 								INCREMENT(OPRT_EC_START,57)
#define OPRT_MQ_PUBLISH_TIMEOUT 						INCREMENT(OPRT_EC_START,58)
#define OPRT_GW_NOT_EXIST 								INCREMENT(OPRT_EC_START,59)
#define OPRT_GW_SCHEMA_SIZE_LMT_OUT 					INCREMENT(OPRT_EC_START,60)
#define OPRT_DEV_DP_CNT_INVALID 						INCREMENT(OPRT_EC_START,61)
#define OPRT_TOKEN_OVERTIME 							INCREMENT(OPRT_EC_START,62)
#define OPRT_WF_NW_CFG_RECV_CONTINUE 					INCREMENT(OPRT_EC_START,63)
#define OPRT_RECV_DA_NOT_ENOUGH 						INCREMENT(OPRT_EC_START,64)
#define OPRT_SERV_VRFY_FAIL 							INCREMENT(OPRT_EC_START,65)
#define OPRT_KVS_WR_FAIL 								INCREMENT(OPRT_EC_START,66)
#define OPRT_KVS_RD_FAIL 								INCREMENT(OPRT_EC_START,67)
#define OPRT_NO_AUTHENTICATION 							INCREMENT(OPRT_EC_START,68)
#define OPRT_CMD_OUT_OF_TIME_NOT_EXEC 					INCREMENT(OPRT_EC_START,69)
#define OPRT_CMD_NOT_EXEC 								INCREMENT(OPRT_EC_START,70)
#define OPRT_CRC32_FAILED 								INCREMENT(OPRT_EC_START,71)
#define OPRT_LAN_NO_CLIENT 								INCREMENT(OPRT_EC_START,72)
#define OPRT_WF_INTF_LACK_REG_CB 						INCREMENT(OPRT_EC_START,73) // wifi interface lack register callback
#define OPRT_WF_INTF_NO_REG_CB 							INCREMENT(OPRT_EC_START,74) // wifi interface no register callback
#define OPRT_STORAGE_UPLOAD 							INCREMENT(OPRT_EC_START,75)
#define OPRT_DP_ID_NOT_FOUND							INCREMENT(OPRT_EC_START,76)
#define OPRT_DP_PUBLISH_PARAM_UNRECOGNIZE				INCREMENT(OPRT_EC_START,77)
#define OPRT_DP_REPORT_PARAM_UNRECOGNIZE				INCREMENT(OPRT_EC_START,78)
#define OPRT_DP_INIT_PARAM_UNRECOGNIZE 					INCREMENT(OPRT_EC_START,79)
#define OPRT_OSS_OPERATION_INIT_FAILED 					INCREMENT(OPRT_EC_START,80)
#define OPRT_OSS_OPERATION_UPDATE_FAILED 				INCREMENT(OPRT_EC_START,81)
#define OPRT_OSS_OPERATION_UPLOAD_FAILED 				INCREMENT(OPRT_EC_START,82)
#define OPRT_MOTION_DETECTION_ALARM_PACK_REPORT_FAILED 	INCREMENT(OPRT_EC_START,83)
#define OPRT_TRANSFER_INIT_FAILED 						INCREMENT(OPRT_EC_START,84)
#define OPRT_LOG_ERR_START 								INCREMENT(OPRT_EC_START,85)
#define OPRT_OPEN_FILE_FAILED  							INCREMENT(OPRT_EC_START,86)
#define OPRT_DONOT_FOUND_MODULE  						INCREMENT(OPRT_EC_START,87)
#define OPRT_PRINT_LOG_LEVEL_HIGHER 					INCREMENT(OPRT_EC_START,88)
#define OPRT_FORMAT_STRING_FAILED 						INCREMENT(OPRT_EC_START,89)
#define OPRT_STRING_TOO_LONG 							INCREMENT(OPRT_EC_START,90)
#define OPRT_ORDER_EXPIRE 								INCREMENT(OPRT_EC_START,91)
#define OPRT_REMOTE_API_RUN_UNKNOW_FAILED 				INCREMENT(OPRT_EC_START,92)
#define OPRT_DEVICE_REMOVED 							INCREMENT(OPRT_EC_START,93)
#define OPRT_NO_TS_FILE 								INCREMENT(OPRT_EC_START,94)
#define OPRT_RTMP_PARSE_URL_ERROR 						INCREMENT(OPRT_EC_START,95)
#define OPRT_RTMP_CONNECT_ERROR 						INCREMENT(OPRT_EC_START,96)
#define OPRT_RTMP_NOT_INITED 							INCREMENT(OPRT_EC_START,97)
#define OPRT_RTMP_SEND_ERROR 							INCREMENT(OPRT_EC_START,98)
#define OPRT_RTMP_SEND_METADATA_ERROR 					INCREMENT(OPRT_EC_START,99)
#define OPRT_RTMP_FIFO_FULL 							INCREMENT(OPRT_EC_START,100)
#define OPRT_RTMP_FIFO_DATA_ERROR 						INCREMENT(OPRT_EC_START,101)
#define OPRT_NO_MORE_DATA 								INCREMENT(OPRT_EC_START,102)
#define OPRT_CLOUD_STORAGE_OFF 							INCREMENT(OPRT_EC_START,103)
#define OPRT_CLOUD_STORAGE_STATUS_INVALID 				INCREMENT(OPRT_EC_START,104)
#define OPRT_ENCRYPT_KEY_UPDATED 						INCREMENT(OPRT_EC_START,105)
#define OPRT_EVENT_STATUS_INVALID 						INCREMENT(OPRT_EC_START,106)
#define OPRT_WARN_LIVING_CHROMECAST         			INCREMENT(OPRT_EC_START,107)
#define OPRT_WARN_LIVING_ECHOSHOW           			INCREMENT(OPRT_EC_START,108)
#define OPRT_INFO_QUIT_CHROMECAST           			INCREMENT(OPRT_EC_START,109)
#define OPRT_INFO_QUIT_ECHOSHOW             			INCREMENT(OPRT_EC_START,110)

#ifdef __cplusplus
}
#endif
#endif

