# 01.7 微积分

## 导数
$$
f'(x)=\lim_{h\to0}\frac{f(x+h)-f(x)}{h}
$$

导数描述曲线切线、运动速度和函数局部变化率。

## 偏导数与梯度
对标量场 $f(x,y,z)$：

$$
\nabla f=
\left(
\frac{\partial f}{\partial x},
\frac{\partial f}{\partial y},
\frac{\partial f}{\partial z}
\right)^T
$$

梯度指向函数增长最快的方向。高度场、隐式曲面法线、纹理过滤和优化算法都会用到相关思想。

## 积分
渲染方程包含对半球方向的积分；Path Tracing 使用 Monte Carlo 方法估计该积分。

**上一节：** [三角学](06-trigonometry.md) · **下一节：** [概率统计](08-probability-statistics.md)
