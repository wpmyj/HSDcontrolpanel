#ifndef  MCP2515_H
#define  MCP2515_H

//MCP2515 波特率配置  16M晶振     SJW  段数(1+PRSEG+PRSEG1+PRSEG2)   
#define CNF1_5K      0xff        //4   25(1+8+8+8)
#define CNF2_5K      0xff
#define CNF3_5K      0x47

#define CNF1_10K     0xe9        //4   19(1+3+8+7)
#define CNF2_10K     0xfa
#define CNF3_10K     0x46
 
#define CNF1_15K     0xdb        //4   19(1+3+8+7)
#define CNF2_15K     0xfa
#define CNF3_15K     0x46

#define CNF1_20K     0xd3        //4   20(1+4+8+7) 
#define CNF2_20K     0xfb
#define CNF3_20K     0x46

#define CNF1_25K     0xcb        //4   20(1+4+8+7)
#define CNF2_25K     0xfb
#define CNF3_25K     0x46

#define CNF1_40K     0xc9        //4   20(1+4+8+7)
#define CNF2_40K     0xfb
#define CNF3_40K     0x46

#define CNF1_50K     0xc7        //4   20(1+4+8+7) 
#define CNF2_50K     0xfb
#define CNF3_50K     0x46

#define CNF1_80K     0xc4        //4   20(1+4+8+7)
#define CNF2_80K     0xfb
#define CNF3_80K     0x46

#define CNF1_100K    0x84        //3   16(1+1+8+6)
#define CNF2_100K    0xf8
#define CNF3_100K    0x45

#define CNF1_125K    0x83        //3   16(1+1+8+6)
#define CNF2_125K    0xf8
#define CNF3_125K    0x45

#define CNF1_200K    0xc1        //4   20(1+4+8+7)
#define CNF2_200K    0xfb
#define CNF3_200K    0x46

#define CNF1_250K    0x81        //3   16(1+1+8+6)
#define CNF2_250K    0xf8
#define CNF3_250K    0x45

#define CNF1_400K    0xc0        //4   20(1+4+8+7)
#define CNF2_400K    0xfb
#define CNF3_400K    0x46

#define CNF1_500K    0x80        //3   16(1+1+8+6)
#define CNF2_500K    0xf8
#define CNF3_500K    0x45

#define CNF1_667K    0x80        //3   12(1+1+5+5) 
#define CNF2_667K    0xa0
#define CNF3_667K    0x44

#define CNF1_800K    0x80        //3   10(1+1+4+4) 
#define CNF2_800K    0x98
#define CNF3_800K    0x43

#define CNF1_1M      0x40        //2   08(1+1+3+3)
#define CNF2_1M      0x90
#define CNF3_1M      0x42

//#define CS_SPI  P2_6   //MCP2515片选端
//mcp2515函数声明
//extern void SPIInit(void);  //SPI初始化
//extern void Reset_2515(void);  //重启mcp2515
//extern void MODIFY_2515(uint8 Addr, uint8 MASK,uint8  dat);  //只修改寄存器中的某些位
//extern uint8 Read_BYTE_2515(uint8 Addr);  //从指定地址起始的寄存器读取数据
//extern void Write_BYTE_2515(uint8 Addr,uint8 dat);  //将数据写入指定地址起始的寄存器
//extern void Write_SPI(uint8 Write_Byte);  //向SPI总线发送一个字节
//extern uint8 Read_SPI(void);  //从SPI总线读取一个字节
#endif