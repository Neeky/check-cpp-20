#include <iostream>
#include <pthread.h>

void* fun(void* arg)
{
    printf("start execute function fun \n");
    return (void*)"Success";
}

int main()
{
    //
    printf("main thread start. \n");

    // 保存 pthread_create 的返回值，如果返回 0 表示成功，其它值会失败的错误码
    int p_ret {0};
    // 保存线程的返回值
    void* ret_value = NULL;
    //保存线程的 thread-id 
    pthread_t tid {0};

    // 创建线程
    p_ret = pthread_create(&tid, NULL, fun, NULL);
    if (p_ret) {
        printf("create thread fail. error number = %d \n", p_ret);
    }

    // join
    pthread_join(tid, &ret_value);
    printf("thread%d completed result = '%s' .\n", tid, (char*)ret_value);
    printf("main thread exit. \n");
    return 0;
}