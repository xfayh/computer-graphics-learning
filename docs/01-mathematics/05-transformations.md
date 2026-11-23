# 01.5 空间变换

## 齐次坐标
将三维点扩展为四维：

$$
\mathbf p_h=(x,y,z,1)^T
$$

方向向量使用 $w=0$。因此平移只影响点，不影响方向。

## 平移
$$
T=
\begin{bmatrix}
1&0&0&t_x\
0&1&0&t_y\
0&0&1&t_z\
0&0&0&1
\end{bmatrix}
$$

## 缩放
$$
S=\operatorname{diag}(s_x,s_y,s_z,1)
$$

非均匀缩放会改变法线与切线的垂直关系，因此法线应使用模型矩阵左上角 3×3 部分的逆转置矩阵变换。

## 绕 Z 轴旋转
$$
R_z(\theta)=
\begin{bmatrix}
\cos\theta&-\sin\theta&0&0\
\sin\theta&\cos\theta&0&0\
0&0&1&0\
0&0&0&1
\end{bmatrix}
$$

列向量约定下 $M=TRS$ 表示先缩放，再旋转，最后平移。

**上一节：** [坐标系统](04-coordinate-systems.md) · **下一节：** [三角学](06-trigonometry.md)
