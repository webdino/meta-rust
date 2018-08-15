require rust-cross.inc
require rust-source-${PV}.inc
require rust-snapshot-${PV}.inc

RUST_STD_SNAPSHOT_TARGET = "rust-std-${RS_VERSION}-${RUST_TARGET_SYS}"

SRC_URI += " \
	https://static.rust-lang.org/dist/${RUST_STD_SNAPSHOT_TARGET}.tar.gz;name=rust-std-snapshot-target-${RUST_TARGET_SYS};subdir=rust-snapshot-components \
"

#i586-unknown-linux-gnu hashes
SRC_URI[rust-std-snapshot-target-i586-unknown-linux-gnu.md5sum] = "cb640767cf48965bfd682492975a2f7f"
SRC_URI[rust-std-snapshot-target-i586-unknown-linux-gnu.sha256sum] = "5322d81504db5d1224b9fe2d4a4e0a23e4ae2fcf3dc090db12678dc5f3111d63"

#i686-unknown-linux-gnu hashes
SRC_URI[rust-std-snapshot-target-i686-unknown-linux-gnu.md5sum] = "db2dc7722b2eb6c44e4f11b0201d1d6f"
SRC_URI[rust-std-snapshot-target-i686-unknown-linux-gnu.sha256sum] = "8b0b4f823bb83b999cf6c376990ce3c9d70e1fe846e4b82068170cb8397d07ac"

#arm-unknown-linux-gnueabihf hashes
SRC_URI[rust-std-snapshot-target-arm-unknown-linux-gnueabihf.md5sum] = "855bf997716027017c4a5b19a59d17be"
SRC_URI[rust-std-snapshot-target-arm-unknown-linux-gnueabihf.sha256sum] = "61d5654881cacf16d0d40fe0fd9cf0f464acc049643e0458666543928addae1e"

#aarch64-unkown-linux-gnu hashes
SRC_URI[rust-std-snapshot-target-aarch64-unknown-linux-gnu.md5sum] = "0e349fe6c804b9f7a3742322a80cd97a"
SRC_URI[rust-std-snapshot-target-aarch64-unknown-linux-gnu.sha256sum] = "50cedd868e007d60650efe4c44cd37ffbfbde74baa1f6b3a3ff2a94935e3c0a3"
