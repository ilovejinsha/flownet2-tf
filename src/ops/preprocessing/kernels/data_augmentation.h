#ifndef FLOWNET_DATA_AUGMENTATION_H_
#define FLOWNET_DATA_AUGMENTATION_H_

template<typename Device>
struct AugmentFunctor {
  void operator()(const Device& d,
                  const int     batch_size,
                  const int     channels,
                  const int     src_width,
                  const int     src_height,
                  const int     src_count,
                  const int     out_width,
                  const int     out_height,
                  const float  *src_data,
                  float        *out_data,
                  const float  *transMats);
};

#endif // FLOWNET_DATA_AUGMENTATION_H_
