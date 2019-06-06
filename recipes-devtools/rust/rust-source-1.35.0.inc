SRC_URI += "https://static.rust-lang.org/dist/rustc-${PV}-src.tar.gz;name=rust"

SRC_URI[rust.md5sum] = "f43af67a139ce21ff5f530bbd2f486aa"
SRC_URI[rust.sha256sum] = "5a4d637a716bac18d085f44dd87ef48b32195f71b967d872d80280b38cff712d"

# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=66ddc8ecd998476b7cd5732e8c3a6c1d"
