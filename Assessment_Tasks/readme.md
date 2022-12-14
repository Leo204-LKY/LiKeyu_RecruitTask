## 考核任务 Assessment Tasks  
本文件夹用于提交考核任务。  

### 任务 1  
- 任务内容：  
  1. 利用定时器溢出中断编写一个函数实现延时的功能  
  2. 利用按键等触发外部中断，在中断处理函数中调用延时函数，使LED闪烁三次  
- 完成时间：2022/10/23  
- 完成历程：  
  1. 学习完 B 站上关于 LED 和独立按键的课程，尝试使用已学知识解决任务一。但发现自己还没有学习中断操作，于是在 B 站查找与中断相关的[视频](https://b23.tv/BV1hL4y1q7co "BV1hL4y1q7co - 外部中断0和外部中断1，STC89C51RC，单片机学习笔记21 - bilibili")，结合[官方文档](https://github.com/Leo204-LKY/Code-Learning/blob/main/51%20MCU/Bilibili%20Courses/00-1-STC89Cxx%E4%B8%AD%E6%96%87%E5%8F%82%E8%80%83%E6%89%8B%E5%86%8C.pdf "Leo204-LKY/Code-Learning/51 MCU/Bilibili Courses/00-1-STC89Cxx中文参考手册.pdf - GitHub")尝试编写代码 (Commit [31c878d](https://github.com/Leo204-LKY/LiKeyu_RecruitTask/commit/31c878d201330529e6f67f875d1c8af32c016606))  
  2. 发现 LED 在没有按下按键时也会随机闪烁，规律未知  
  3. 翻阅[开发板原理图](https://github.com/Leo204-LKY/Code-Learning/blob/main/51%20MCU/Bilibili%20Courses/00-2-%E6%99%AE%E4%B8%AD-2%26%E6%99%AE%E4%B8%AD-3%26%E6%99%AE%E4%B8%AD-4%E5%BC%80%E5%8F%91%E6%9D%BF%E5%8E%9F%E7%90%86%E5%9B%BE.pdf "Leo204-LKY/Code-Learning/51 MCU/Bilibili Courses/00-2-普中-2&普中-3&普中-4开发板原理图.pdf - GitHub")，发现触发外部中断 0 所需的 P3.2 引脚除了与独立按键 K3 相连外，还与红外接收模块相连，也就是当接收到红外信号时也会触发中断。使用遥控器成功验证猜测  
  4. 尝试拔掉红外接收模块， LED 开始一直闪烁，失败；再次查阅官方文档，对照原理图，发现触发外部中断 1 所需的 P3.3 引脚没有其他干扰项，修改代码 (Commit [75ee0ba](https://github.com/Leo204-LKY/LiKeyu_RecruitTask/commit/75ee0ba9003d9627912e51a5ea6d9224fd852fae)) ，按下独立按键 K4 ，LED闪烁三次，成功解决问题  
  ![动画](https://user-images.githubusercontent.com/57821066/197356084-46e6bd8d-deed-4943-9c38-f9b1f4860f95.gif)  


### 任务 2  
- 任务内容：  
  - 使用单片机(STC89C52或STM32F1)输出一路PWM，实现呼吸灯/可调转速的马达  
  - 注意：可以参考网上的例程，但是要做题者必须自己写出代码的重要部分而且明白每行代码的作用  
  - 检验方法： 通过小马达的转速是否可调或者LED的亮度是否可调来评判是否完成PWM的输出。将代码中重要部分打上自己的注释，来说明是否完全理解PWM的输出  
- 完成时间： _未完成_  
- 完成历程： _暂无_  

### 任务 3  
- 任务内容：  
  - 使用单片机设计密码锁  
  - 实现内容：通过按键输入4位密码（自定义） 若密码错误，则显示屏第一行显示“密码错误！”，第二行显示“请重新输入！”, 然后清空屏幕，第一行恢复显示“请输入密码：”；若密码正确，单片机控制设备进行响应（如点亮LED灯/蜂鸣器鸣响），屏幕第一行显示“开锁成功!”  
  - 要求：  
    1. 使用不超过5个按键  
    2. 输入密码时用户可以删除输错的密码  
  - TIPS: 单片机可以使用51系列（推荐STC89C52开发版）、ESP32、STM32系列单片机  
- 完成时间： _未完成_  
- 完成历程： _暂无_  

### 任务 4  
- 任务内容：  
  - 利用所学知识，完成红外遥控功能，形式不限  
- 完成时间： _未完成_  
- 完成历程： _暂无_  