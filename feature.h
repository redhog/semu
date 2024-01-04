#ifdef FEATURE_H
#else
#define FEATURE_H

/* enable/disable (compile time) features in this header */

/* virtio-blk */
#ifdef SEMU_FEATURE_VIRTIOBLK
#else
#define SEMU_FEATURE_VIRTIOBLK 1
#endif

/* virtio-net */
#ifdef SEMU_FEATURE_VIRTIONET
#else
#define SEMU_FEATURE_VIRTIONET 1
#endif

#endif
