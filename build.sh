#!/bin/bash

function compile() 
{

source ~/.bashrc && source ~/.profile
export LC_ALL=C && export USE_CCACHE=1
ccache -M 100G
export ARCH=arm64
export KBUILD_BUILD_HOST=YorForger
export KBUILD_BUILD_USER="RootAchan"
git clone --depth=1 https://gitlab.com/AnggaR96s/clang-gengkapak.git clang

[ -d "out" ] && rm -rf out || mkdir -p out

make O=out ARCH=arm64  gki_defconfig

PATH="${PWD}/clang/bin:${PATH}" \
make -j$(nproc --all) O=out \
			ARCH=$ARCH \
			CC="clang" \
			CROSS_COMPILE=aarch64-linux-gnu- \
			CROSS_COMPILE_ARM32=arm-linux-gnueabi- \
            LLVM=1 \
			LD=ld.lld \
			AR=llvm-ar \
			NM=llvm-nm \
			OBJCOPY=llvm-objcopy \
			OBJDUMP=llvm-objdump \
			STRIP=llvm-strip \
			CONFIG_NO_ERROR_ON_MISMATCH=y
}

function zupload()
{
git clone --depth=1 https://github.com/fskhri/AnyKernel3.git AnyKernel
cp out/arch/arm64/boot/Image.gz AnyKernel
cd AnyKernel
zip -r9 Test-Kernel-Plato.zip *
curl --upload-file "Test-Kernel-Plato.zip" https://free.keep.sh
}

compile
zupload
