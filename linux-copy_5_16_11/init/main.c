//
// Created by geng sun on 2022/2/24.
//

//asmlinkage定义：#define asmlinkage __attribute__((regparm(0)))
//表示用0个寄存器传递函数参数，这样，所有的函数参数强迫从栈中提取。
//__visible ,被标记的函数或变量在当前编译单元外部仍然可见
// __init 编译器将标__init的所有代码存在特殊的内存段中，初始化结束后就释放这段内存。
// __no_sanitize_address __no_sanitize_address宏的含义就是用于通知编译器，当使用编译器编译时，不应在函数中检测内存访问-fsanitize = address 选项。
asmlinkage __visible void __init __no_sanitize_address start_kernel(void){
    char *commadn_line;
    char *after_dashes;


}