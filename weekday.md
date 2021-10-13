# `weekday.c`

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

提示: 你可能需要使用 `floor` 函数, 请自行查找其含义与用法。