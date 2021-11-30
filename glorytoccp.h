#ifndef _GLORYTOCCP_H_
#define _GLORYTOCCP_H_

#define LOG_TAG KBUILD_MODNAME ": "

#define LOGE(msg, ...) pr_err(LOG_TAG msg, ##__VA_ARGS__)
#define LOGI(msg, ...) pr_info(LOG_TAG msg, ##__VA_ARGS__)

#endif // _GLORYTOCCP_H_
