#!/bin/bash

#
# Usage: ./gen4_demo_ksb_keys.sh
#
#    Note:
#        This script is an example and it may be required to customize if needed
#
#    Description:
#        This script generate and preprocess Cryptographic Keys - AES128, RSA2048 and RSA2048
#        To re-generate Demo Keysm execut this script from
#            SDK_root_directory/targets/keys/demo/GEN4/<SOC_FOLDER>/ksb
#
#    Example:"
#        ../../scripts/gen4_demo_ksb_keys.sh
#

CUST_AES_128=("a1k1")
CUST_AES_256=("a2k1" "a2k2" "a2k3" "a2k4" "a2k5")

CUST_RSA_2K=("r2k1" "r2k2" "r2k3" "r2k4" "r2k5")
CUST_RSA_4K=("r4k1" "r4k2" "r4k3" "r4k4" "r4k5")

function clean_up() {
	rm *.tmp*
	exit
}

# $1 - Public in PEM
# $2 - Output file name to keep the Modulus
function get_modulus_bin() {
	openssl rsa -pubin -in $1 -modulus -noout > $1.tmp.modulus.text
	if [ $? -ne 0 ]; then
		clean_up
	fi

	cat $1.tmp.modulus.text | sed 's|.*\=\(.*\)|\1|' > $1.tmp
	if [ $? -ne 0 ]; then
		clean_up
	fi

	xxd -r -p $1.tmp $2
	if [ $? -ne 0 ]; then
		clean_up
	fi
}

#
# RoT RSA2048
#
for key in "${CUST_RSA_2K[@]}"
do
	openssl genrsa -out $key.pem 2048 && openssl rsa -in $key.pem -pubout -out $key-pub.pem
	get_modulus_bin $key-pub.pem $key-pub.bin

	# No need to keep public part in pem - if otherwise, comment the line below
	rm $key-pub.pem
done

#
# RoT RSA4096
#
for key in "${CUST_RSA_4K[@]}"
do
	openssl genrsa -out $key.pem 4096 && openssl rsa -in $key.pem -pubout -out $key-pub.pem
	get_modulus_bin $key-pub.pem $key-pub.bin

	# No need to keep public part in pem - if otherwise, comment the line below
	rm $key-pub.pem
done

#
# RoE AES128
#
for key in "${CUST_AES_128[@]}"
do
	openssl rand -hex 16 | tr -d "\n" > $key-ek.hex
	xxd -r -p $key-ek.hex > $key-ek.bin # && xxd -i $key-ek.bin > $key-ek.h

	openssl rand -hex 16 | tr -d "\n" > $key-iv.hex
	xxd -r -p $key-iv.hex > $key-iv.bin # && xxd -i $key-iv.bin > $key-iv.h

	# Prepare AES 128b (EK 16B + IV 16B ==> 32B)
	cat $key-ek.bin $key-iv.bin > $key.bin

	# No need to keep ek and iv in bin - if otherwise, comment the line below
	rm $key-ek.bin $key-iv.bin
done

#
# RoE AES256
#
for key in "${CUST_AES_256[@]}"
do
	openssl rand -hex 32 | tr -d "\n" > $key-ek.hex
	xxd -r -p $key-ek.hex > $key-ek.bin # && xxd -i $key-ek.bin > $key-ek.h

	openssl rand -hex 16 | tr -d "\n" > $key-iv.hex
	xxd -r -p $key-iv.hex > $key-iv.bin # && xxd -i $key-iv.bin > $key-iv.h

	# Prepare AES 256b (EK 32B + IV 16B ==> 48B)
	cat $key-ek.bin $key-iv.bin > $key.bin

	# No need to keep ek and iv in bin - if otherwise, comment the line below
	rm $key-ek.bin $key-iv.bin
done

echo "done"
clean_up
