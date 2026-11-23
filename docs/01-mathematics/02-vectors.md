# 01.2 向量：几何运算与渲染应用

## 向量与长度
三维向量写作：

$$
\mathbf v=(x,y,z)^T
$$

其欧氏长度为：

$$
\|\mathbf v\|=\sqrt{x^2+y^2+z^2}
$$

单位化：

$$
\hat{\mathbf v}=\frac{\mathbf v}{\|\mathbf v\|}
$$

零向量不能单位化；工程代码必须显式处理。

## 点积
$$
\mathbf a\cdot\mathbf b= a_xb_x+a_yb_y+a_zb_z
=\|\mathbf a\|\|\mathbf b\|\cos\theta
$$

单位向量点积得到夹角余弦。Lambert 漫反射常用：

$$
I_d=k_d I_L\max(0,\mathbf n\cdot\mathbf l)
$$

法线与光照方向必须采用一致的方向定义且已归一化。

## 叉积
$$
\mathbf a\times\mathbf b=
\begin{bmatrix}
a_yb_z-a_zb_y\
a_zb_x-a_xb_z\
a_xb_y-a_yb_x
\end{bmatrix}
$$

叉积垂直于两个输入向量，长度等于平行四边形面积。三角形法线可由 $(B-A)\times(C-A)$ 得到；交换顺序会翻转法线。

## 投影与反射
$$
\operatorname{proj}_{\mathbf b}\mathbf a=
\frac{\mathbf a\cdot\mathbf b}{\mathbf b\cdot\mathbf b}\mathbf b
$$

单位法线 $\mathbf n$ 下，入射方向 $\mathbf i$ 的反射方向：

$$
\mathbf r=\mathbf i-2(\mathbf i\cdot\mathbf n)\mathbf n
$$

## 数值注意事项
- 比较浮点向量应使用绝对/相对容差。
- 归一化前检查长度平方是否接近零。
- 叉积接近零意味着输入近似平行，无法稳定定义法线。
- 叉积顺序和坐标系手性共同决定绕序与法线方向。

## 实践
完成 Vec3 的加减、数乘、长度、归一化、点积、叉积、投影和反射；测试零向量、平行、正交及单位向量。

**上一节：** [线性代数](01-linear-algebra.md) · **下一节：** [矩阵](03-matrices.md)
