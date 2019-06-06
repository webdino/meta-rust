SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.gz;name=rust"

SRC_URI[rust.md5sum] = "0a09731ce756c7996091517bec197dcc"
SRC_URI[rust.sha256sum] = "7ac85acffd79dd3a7c44305d9eaabd1f1e7116e2e6e11e770e4bf5f92c0f1f59"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=66ddc8ecd998476b7cd5732e8c3a6c1d"
