# 01.8 概率与统计

## 随机变量与期望
$$
\\mathbb E[X]=\\int x p(x)\\,dx
$$

渲染中的像素颜色可视为随机路径贡献的期望估计。

## Monte Carlo 估计
$$
\\int f(x)\\,dx
=\\mathbb E_p\\left[\\frac{f(X)}{p(X)}\\right]
\\approx\\frac1N\\sum_{i=1}^{N}\\frac{f(X_i)}{p(X_i)}
$$

$X_i$ 按概率密度 $p$ 采样。采样分布必须覆盖被积函数的有效区域。

## 后续联系
重要性采样、路径追踪、抗锯齿、环境光照积分、降噪和时域累积均依赖概率统计。

**上一节：** [微积分](07-calculus.md) · **下一节：** [数值计算](09-numerical-computation.md)
