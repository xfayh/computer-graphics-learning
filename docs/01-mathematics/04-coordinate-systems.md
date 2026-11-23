# 01.4 坐标系统

## 常见空间
- Model/Object：模型局部空间。
- World：世界空间。
- View/Eye：相机观察空间。
- Clip：齐次裁剪空间。
- NDC：透视除法后的规范化设备坐标。
- Window/Framebuffer：视口映射后的窗口坐标。

## 变换链
列向量约定：

$$
\\mathbf p_{clip}=P V M \\mathbf p_{local}
$$

透视除法：

$$
\\mathbf p_{ndc}= (x_c/w_c, y_c/w_c, z_c/w_c)^T
$$

之后通过 viewport 映射到 framebuffer 像素区域。

## API 差异必须显式处理
- OpenGL 传统默认 NDC 深度范围为 $[-1,1]$；可通过相关扩展/配置使用零到一深度。
- Direct3D 常用 NDC 深度范围为 $[0,1]$。
- Vulkan 的裁剪与视口约定要结合规范版本和配置。
- Metal、WebGPU 也有各自明确的坐标和深度约定。
- 屏幕 Y 轴方向、纹理坐标原点、前向轴和手性不可混为一谈。

**上一节：** [矩阵](03-matrices.md) · **下一节：** [空间变换](05-transformations.md)
