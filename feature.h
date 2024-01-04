#ifdef FEATURE_H
#else
#define FEATURE_H

/* enable/disable (compile time) features in this header */

/* virtio-blk */
#ifdef SEMU_FEATUREVIRTIOBLK
#else
#define SEMU_FEATUREVIRTIOBLK 1
#endif

/* virtio-net */
#ifdef SEMU_FEATUREVIRTIONET
#else
#define SEMU_FEATUREVIRTIONET 1
#endif

/* Feature test macro */
#define SEMU_HAS(x) SEMU_FEATURE_##x

#endif
