# 1-types-io

Programming Exercises on Variables, Types, Maths, and Formatted Printing.

## 你的任务

- [ ] 在每个 `*.c` 文件开头的注释里, 填上你的姓名 (Author: ), 学号 (ID: ) 与做作业时的日期 (Date: )。

---

### `pi.c`

分别用以下两种方式计算圆周率:

- [Machin Formula @ wiki](https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Machin-like_formula)
  - PI / 4 = 4 arctan (1/5) - arctan (1/239)
- [Formula @ wiki](https://en.wikipedia.org/wiki/Approximations_of_%CF%80#Miscellaneous_approximations)
  - ln (640320^3 + 744) / (sqrt of 163)

要求:

- 每个结果占一行
- 小数点后均保留 15 位

---

### `time.c`

问题描述: 用户输入日期与时间信息, 需要按指定格式输出。

- 输入格式:
- 输出格式: `Www Mmm dd hh:mm:ss yyyy`
  - `Www`: 3-letter abbreviated day of the week
  - `Mmm`: 3-letter abbreviated month name
  - `dd`: 2-digit day of the month
  - `hh`: 2-digit hour
  - `mm`: 2-digit minute
  - `ss`: 2-digit second
  - `yyyy`: 4-digit year

举例:

- 输入: November 17 1968 Sunday 6:6:6
- 输出: Sun Nov 17 06:06:06 1968

---

### `weekday.c`

利用 [Gauss's Algorithm @ wiki](https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week#Disparate_variation)，
根据给定的日期, 计算当日是周几。

- 输入: 三个整数, 分别表示年月日, 之间以空格相隔
- 输出: 周几 (0代表周日，1代表周一，以此类推)

示例:

- 输入: 2021 10 12
- 输出: 2

提示:

- 可以使用 `math.h` 中的floor函数进行向下取整
- 如果得到了一个`double`类型的数`d`，想要对它进行取模操作，我们可以
  - `(int) d % 7`

---

### `inverse.c`

用户输入一个三位数, 要求按照数位的逆序打印出这个数。

例如:

- 输入 123, 输出 321。
- 输入 100, 输出 001。

提示:

- 你可以修改 `inverse.c` 中的 `scanf`
- 你可能需要使用 `/` (整数除法操作) 与 `%` (整数取余操作); 请参阅教材。

---

### `equation.c`

求解**整系数**[一元二次方程](https://en.wikipedia.org/wiki/Quadratic_equation):
ax^2 + bx + c = 0。

- 输入: 三个整数系数 a, b, c, 之间以空格相隔
- 输出: 方程的两个根, 每个根占一行, 小数点后均保留三位

假设:

- 系数都是整数, 且 a 不为 0。
- 判别式 >= 0。

---

### `gray.c`
给定一个数，保证它的二进制表示在4位以内（不到4位就可以表示的算作4位），请求出这个数的 [Gray Code @ wiki](https://en.wikipedia.org/wiki/Gray_code)

例如：
- 输入 `10` ，输出 `1111`
- 输入 `2` ，输出 `0011`

---

### `change.c`

编写一个程序，要求用户输入一个美元数额，然后显示出如何用最少张数的20美元、10美元、5美元和1美元钞票来付款：

- 输入格式：一行一个整数$n$，表示输入的美元数额。
- 输出格式：四行四个整数$a_1, a_2, a_3, a_4$，分别表示所需要的20美元、10美元、5美元和1美元钞票的数量。
- 注意：不要在行尾输出多余的空格，并在第四行结尾输出一个换行符，**如果你的程序不遵守输出的规范，将没办法得到此题的分数**。

#### Sample:

##### 输入：
```plain
93
```
##### 输出：
```plain
4
1
0
3

```

---

## 如何做作业

- 参考作业 `hello-c` 中的 `README.md`

---

## 关于 GitHub Classroom

- 使用模式
- 如何处理用户输入
- 如何处理 `-lm`

---
