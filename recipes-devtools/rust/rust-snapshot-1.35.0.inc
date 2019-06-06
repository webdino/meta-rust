## This is information on the rust-snapshot (binary) used to build our current release.
## snapshot info is taken from rust/src/stage0.txt
## TODO: find a way to add additional SRC_URIs based on the contents of an
##       earlier SRC_URI.
RS_VERSION = "1.34.2"

RUST_STD_SNAPSHOT = "rust-std-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
RUSTC_SNAPSHOT = "rustc-${RS_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"
CARGO_VERSION = "0.35.0"
CARGO_SNAPSHOT = "cargo-${CARGO_VERSION}-${BUILD_ARCH}-unknown-linux-gnu"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT}.tar.gz;name=rust-std-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${RUSTC_SNAPSHOT}.tar.gz;name=rustc-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	https://static.rust-lang.org/dist/${CARGO_SNAPSHOT}.tar.gz;name=cargo-snapshot-${BUILD_ARCH};subdir=rust-snapshot-components \
	"

# TODO: Add hashes for other architecture toolchains as well. Make a script?
SRC_URI[rustc-snapshot-x86_64.md5sum] = "f76f83120f1a3912ac39d94bd4cbc130"
SRC_URI[rustc-snapshot-x86_64.sha256sum] = "6feecd115bd2072a1109a4afbc320dd21d23a2bd1f2d99d5377757fbb9272fc8"
SRC_URI[rust-std-snapshot-x86_64.md5sum] = "77f724de6319193beead06c00f3f5efd"
SRC_URI[rust-std-snapshot-x86_64.sha256sum] = "904950e877759b32afa57e024298d7ed19c72db3fb94890057a3deb070021896"
SRC_URI[cargo-snapshot-x86_64.md5sum] = "72d3ed1d5f17c1c42493d17b1f376aff"
SRC_URI[cargo-snapshot-x86_64.sha256sum] = "1dc3cb681ee275433f3cf751e5736d097b54470e9208dfea18d8ce5505935795"
