# 01.6 三角学

## 角度与弧度
$$
\\theta_{rad}=\\theta_{deg}\\frac{\\pi}{180}
$$

图形数学库通常以弧度为参数，调用 API 时必须核对其约定。

## 单位圆
$$
x=\\cos\\theta,\\qquad y=\\sin\\theta
$$

用于二维旋转、相机轨道、方向向量构造、周期动画和采样。

## 反三角函数
使用 $\\operatorname{atan2}(y,x)$ 恢复角度，避免 $\\operatorname{atan}(y/x)$ 的象限歧义和除零问题。

**上一节：** [空间变换](05-transformations.md) · **下一节：** [微积分](07-calculus.md)
