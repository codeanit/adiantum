static const struct cipher_testvec hbsh_xchacha12_aes_nhpoly1305_tv_template[] = {
	{
		.key	= "\x9e\xeb\xb2\x49\x3c\x1c\xf5\xf4"
			  "\x6a\x99\xc2\xc4\xdf\xb1\xf4\xdd"
			  "\x75\x20\x57\xea\x2c\x4f\xcd\xb2"
			  "\xa5\x3d\x7b\x49\x1e\xab\xfd\x0f",
		.klen	= 32,
		.iv	= "\xdf\x63\xd4\xab\xd2\x49\xf3\xd8"
			  "\x33\x81\x37\x60\x7d\xfa\x73\x08"
			  "\xd8\x49\x6d\x80\xe8\x2f\x62\x54"
			  "\xeb\x0e\xa9\x39\x5b\x45\x7f\x8a",
		.ptext	= "\x67\xc9\xf2\x30\x84\x41\x8e\x43"
			  "\xfb\xf3\xb3\x3e\x79\x36\x7f\xe8",
		.ctext	= "\x6d\x32\x86\x18\x67\x86\x0f\x3f"
			  "\x96\x7c\x9d\x28\x0d\x53\xec\x9f",
		.len	= 16,
		.also_non_np = 1,
		.np	= 8,
		.tap	= { 1, 4, 2, 1, 1, 4, 2, 1 },
	}, {
		.key	= "\x36\x2b\x57\x97\xf8\x5d\xcd\x99"
			  "\x5f\x1a\x5a\x44\x1d\x92\x0f\x27"
			  "\xcc\x16\xd7\x2b\x85\x63\x99\xd3"
			  "\xba\x96\xa1\xdb\xd2\x60\x68\xda",
		.klen	= 32,
		.iv	= "\xef\x58\x69\xb1\x2c\x5e\x9a\x47"
			  "\x24\xc1\xb1\x69\xe1\x12\x93\x8f"
			  "\x43\x3d\x6d\x00\xdb\x5e\xd8\xd9"
			  "\x12\x9a\xfe\xd9\xff\x2d\xaa\xc4",
		.ptext	= "\x5e\xa8\x68\x19\x85\x98\x12\x23"
			  "\x26\x0a\xcc\xdb\x0a\x04\xb9\xdf"
			  "\x4d\xb3\x48\x7b\xb0\xe3\xc8\x19"
			  "\x43\x5a\x46\x06\x94\x2d\xf2",
		.ctext	= "\xc7\xc6\xf1\x73\x8f\xc4\xff\x4a"
			  "\x39\xbe\x78\xbe\x8d\x28\xc8\x89"
			  "\x46\x63\xe7\x0c\x7d\x87\xe8\x4e"
			  "\xc9\x18\x7b\xbe\x18\x60\x50",
		.len	= 31,
		.also_non_np = 1,
		.np	= 5,
		.tap	= { 10, 16, 1, 3, 1 },
	}, {
		.key	= "\xa5\x28\x24\x34\x1a\x3c\xd8\xf7"
			  "\x05\x91\x8f\xee\x85\x1f\x35\x7f"
			  "\x80\x3d\xfc\x9b\x94\xf6\xfc\x9e"
			  "\x19\x09\x00\xa9\x04\x31\x4f\x11",
		.klen	= 32,
		.iv	= "\xa1\xba\x49\x95\xff\x34\x6d\xb8"
			  "\xcd\x87\x5d\x5e\xfd\xea\x85\xdb"
			  "\x8a\x7b\x5e\xb2\x5d\x57\xdd\x62"
			  "\xac\xa9\x8c\x41\x42\x94\x75\xb7",
		.ptext	= "\x69\xb4\xe8\x8c\x37\xe8\x67\x82"
			  "\xf1\xec\x5d\x04\xe5\x14\x91\x13"
			  "\xdf\xf2\x87\x1b\x69\x81\x1d\x71"
			  "\x70\x9e\x9c\x3b\xde\x49\x70\x11"
			  "\xa0\xa3\xdb\x0d\x54\x4f\x66\x69"
			  "\xd7\xdb\x80\xa7\x70\x92\x68\xce"
			  "\x81\x04\x2c\xc6\xab\xae\xe5\x60"
			  "\x15\xe9\x6f\xef\xaa\x8f\xa7\xa7"
			  "\x63\x8f\xf2\xf0\x77\xf1\xa8\xea"
			  "\xe1\xb7\x1f\x9e\xab\x9e\x4b\x3f"
			  "\x07\x87\x5b\x6f\xcd\xa8\xaf\xb9"
			  "\xfa\x70\x0b\x52\xb8\xa8\xa7\x9e"
			  "\x07\x5f\xa6\x0e\xb3\x9b\x79\x13"
			  "\x79\xc3\x3e\x8d\x1c\x2c\x68\xc8"
			  "\x51\x1d\x3c\x7b\x7d\x79\x77\x2a"
			  "\x56\x65\xc5\x54\x23\x28\xb0\x03",
		.ctext	= "\x9e\x16\xab\xed\x4b\xa7\x42\x5a"
			  "\xc6\xfb\x4e\x76\xff\xbe\x03\xa0"
			  "\x0f\xe3\xad\xba\xe4\x98\x2b\x0e"
			  "\x21\x48\xa0\xb8\x65\x48\x27\x48"
			  "\x84\x54\x54\xb2\x9a\x94\x7b\xe6"
			  "\x4b\x29\xe9\xcf\x05\x91\x80\x1a"
			  "\x3a\xf3\x41\x96\x85\x1d\x9f\x74"
			  "\x51\x56\x63\xfa\x7c\x28\x85\x49"
			  "\xf7\x2f\xf9\xf2\x18\x46\xf5\x33"
			  "\x80\xa3\x3c\xce\xb2\x57\x93\xf5"
			  "\xae\xbd\xa9\xf5\x7b\x30\xc4\x93"
			  "\x66\xe0\x30\x77\x16\xe4\xa0\x31"
			  "\xba\x70\xbc\x68\x13\xf5\xb0\x9a"
			  "\xc1\xfc\x7e\xfe\x55\x80\x5c\x48"
			  "\x74\xa6\xaa\xa3\xac\xdc\xc2\xf5"
			  "\x8d\xde\x34\x86\x78\x60\x75\x8d",
		.len	= 128,
		.also_non_np = 1,
		.np	= 5,
		.tap	= { 46, 29, 40, 2, 11 },
	}, {
		.key	= "\xd3\x81\x72\x18\x23\xff\x6f\x4a"
			  "\x25\x74\x29\x0d\x51\x8a\x0e\x13"
			  "\xc1\x53\x5d\x30\x8d\xee\x75\x0d"
			  "\x14\xd6\x69\xc9\x15\xa9\x0c\x60",
		.klen	= 32,
		.iv	= "\x65\x9b\xd4\xa8\x7d\x29\x1d\xf4"
			  "\xc4\xd6\x9b\x6a\x28\xab\x64\xe2"
			  "\x62\x81\x97\xc5\x81\xaa\xf9\x44"
			  "\xc1\x72\x59\x82\xaf\x16\xc8\x2c",
		.ptext	= "\xc7\x6b\x52\x6a\x10\xf0\xcc\x09"
			  "\xc1\x12\x1d\x6d\x21\xa6\x78\xf5"
			  "\x05\xa3\x69\x60\x91\x36\x98\x57"
			  "\xba\x0c\x14\xcc\xf3\x2d\x73\x03"
			  "\xc6\xb2\x5f\xc8\x16\x27\x37\x5d"
			  "\xd0\x0b\x87\xb2\x50\x94\x7b\x58"
			  "\x04\xf4\xe0\x7f\x6e\x57\x8e\xc9"
			  "\x41\x84\xc1\xb1\x7e\x4b\x91\x12"
			  "\x3a\x8b\x5d\x50\x82\x7b\xcb\xd9"
			  "\x9a\xd9\x4e\x18\x06\x23\x9e\xd4"
			  "\xa5\x20\x98\xef\xb5\xda\xe5\xc0"
			  "\x8a\x6a\x83\x77\x15\x84\x1e\xae"
			  "\x78\x94\x9d\xdf\xb7\xd1\xea\x67"
			  "\xaa\xb0\x14\x15\xfa\x67\x21\x84"
			  "\xd3\x41\x2a\xce\xba\x4b\x4a\xe8"
			  "\x95\x62\xa9\x55\xf0\x80\xad\xbd"
			  "\xab\xaf\xdd\x4f\xa5\x7c\x13\x36"
			  "\xed\x5e\x4f\x72\xad\x4b\xf1\xd0"
			  "\x88\x4e\xec\x2c\x88\x10\x5e\xea"
			  "\x12\xc0\x16\x01\x29\xa3\xa0\x55"
			  "\xaa\x68\xf3\xe9\x9d\x3b\x0d\x3b"
			  "\x6d\xec\xf8\xa0\x2d\xf0\x90\x8d"
			  "\x1c\xe2\x88\xd4\x24\x71\xf9\xb3"
			  "\xc1\x9f\xc5\xd6\x76\x70\xc5\x2e"
			  "\x9c\xac\xdb\x90\xbd\x83\x72\xba"
			  "\x6e\xb5\xa5\x53\x83\xa9\xa5\xbf"
			  "\x7d\x06\x0e\x3c\x2a\xd2\x04\xb5"
			  "\x1e\x19\x38\x09\x16\xd2\x82\x1f"
			  "\x75\x18\x56\xb8\x96\x0b\xa6\xf9"
			  "\xcf\x62\xd9\x32\x5d\xa9\xd7\x1d"
			  "\xec\xe4\xdf\x1b\xbe\xf1\x36\xee"
			  "\xe3\x7b\xb5\x2f\xee\xf8\x53\x3d"
			  "\x6a\xb7\x70\xa9\xfc\x9c\x57\x25"
			  "\xf2\x89\x10\xd3\xb8\xa8\x8c\x30"
			  "\xae\x23\x4f\x0e\x13\x66\x4f\xe1"
			  "\xb6\xc0\xe4\xf8\xef\x93\xbd\x6e"
			  "\x15\x85\x6b\xe3\x60\x81\x1d\x68"
			  "\xd7\x31\x87\x89\x09\xab\xd5\x96"
			  "\x1d\xf3\x6d\x67\x80\xca\x07\x31"
			  "\x5d\xa7\xe4\xfb\x3e\xf2\x9b\x33"
			  "\x52\x18\xc8\x30\xfe\x2d\xca\x1e"
			  "\x79\x92\x7a\x60\x5c\xb6\x58\x87"
			  "\xa4\x36\xa2\x67\x92\x8b\xa4\xb7"
			  "\xf1\x86\xdf\xdc\xc0\x7e\x8f\x63"
			  "\xd2\xa2\xdc\x78\xeb\x4f\xd8\x96"
			  "\x47\xca\xb8\x91\xf9\xf7\x94\x21"
			  "\x5f\x9a\x9f\x5b\xb8\x40\x41\x4b"
			  "\x66\x69\x6a\x72\xd0\xcb\x70\xb7"
			  "\x93\xb5\x37\x96\x05\x37\x4f\xe5"
			  "\x8c\xa7\x5a\x4e\x8b\xb7\x84\xea"
			  "\xc7\xfc\x19\x6e\x1f\x5a\xa1\xac"
			  "\x18\x7d\x52\x3b\xb3\x34\x62\x99"
			  "\xe4\x9e\x31\x04\x3f\xc0\x8d\x84"
			  "\x17\x7c\x25\x48\x52\x67\x11\x27"
			  "\x67\xbb\x5a\x85\xca\x56\xb2\x5c"
			  "\xe6\xec\xd5\x96\x3d\x15\xfc\xfb"
			  "\x22\x25\xf4\x13\xe5\x93\x4b\x9a"
			  "\x77\xf1\x52\x18\xfa\x16\x5e\x49"
			  "\x03\x45\xa8\x08\xfa\xb3\x41\x92"
			  "\x79\x50\x33\xca\xd0\xd7\x42\x55"
			  "\xc3\x9a\x0c\x4e\xd9\xa4\x3c\x86"
			  "\x80\x9f\x53\xd1\xa4\x2e\xd1\xbc"
			  "\xf1\x54\x6e\x93\xa4\x65\x99\x8e"
			  "\xdf\x29\xc0\x64\x63\x07\xbb\xea",
		.ctext	= "\x15\x97\xd0\x86\x18\x03\x9c\x51"
			  "\xc5\x11\x36\x62\x13\x92\xe6\x73"
			  "\x29\x79\xde\xa1\x00\x3e\x08\x64"
			  "\x17\x1a\xbc\xd5\xfe\x33\x0e\x0c"
			  "\x7c\x94\xa7\xc6\x3c\xbe\xac\xa2"
			  "\x89\xe6\xbc\xdf\x0c\x33\x27\x42"
			  "\x46\x73\x2f\xba\x4e\xa6\x46\x8f"
			  "\xe4\xee\x39\x63\x42\x65\xa3\x88"
			  "\x7a\xad\x33\x23\xa9\xa7\x20\x7f"
			  "\x0b\xe6\x6a\xc3\x60\xda\x9e\xb4"
			  "\xd6\x07\x8a\x77\x26\xd1\xab\x44"
			  "\x99\x55\x03\x5e\xed\x8d\x7b\xbd"
			  "\xc8\x21\xb7\x21\x30\x3f\xc0\xb5"
			  "\xc8\xec\x6c\x23\xa6\xa3\x6d\xf1"
			  "\x30\x0a\xd0\xa6\xa9\x28\x69\xae"
			  "\x2a\xe6\x54\xac\x82\x9d\x6a\x95"
			  "\x6f\x06\x44\xc5\x5a\x77\x6e\xec"
			  "\xf8\xf8\x63\xb2\xe6\xaa\xbd\x8e"
			  "\x0e\x8a\x62\x00\x03\xc8\x84\xdd"
			  "\x47\x4a\xc3\x55\xba\xb7\xe7\xdf"
			  "\x08\xbf\x62\xf5\xe8\xbc\xb6\x11"
			  "\xe4\xcb\xd0\x66\x74\x32\xcf\xd4"
			  "\xf8\x51\x80\x39\x14\x05\x12\xdb"
			  "\x87\x93\xe2\x26\x30\x9c\x3a\x21"
			  "\xe5\xd0\x38\x57\x80\x15\xe4\x08"
			  "\x58\x05\x49\x7d\xe6\x92\x77\x70"
			  "\xfb\x1e\x2d\x6a\x84\x00\xc8\x68"
			  "\xf7\x1a\xdd\xf0\x7b\x38\x1e\xd8"
			  "\x2c\x78\x78\x61\xcf\xe3\xde\x69"
			  "\x1f\xd5\x03\xd5\x1a\xb4\xcf\x03"
			  "\xc8\x7a\x70\x68\x35\xb4\xf6\xbe"
			  "\x90\x62\xb2\x28\x99\x86\xf5\x44"
			  "\x99\xeb\x31\xcf\xca\xdf\xd0\x21"
			  "\xd6\x60\xf7\x0f\x40\xb4\x80\xb7"
			  "\xab\xe1\x9b\x45\xba\x66\xda\xee"
			  "\xdd\x04\x12\x40\x98\xe1\x69\xe5"
			  "\x2b\x9c\x59\x80\xe7\x7b\xcc\x63"
			  "\xa6\xc0\x3a\xa9\xfe\x8a\xf9\x62"
			  "\x11\x34\x61\x94\x35\xfe\xf2\x99"
			  "\xfd\xee\x19\xea\x95\xb6\x12\xbf"
			  "\x1b\xdf\x02\x1a\xcc\x3e\x7e\x65"
			  "\x78\x74\x10\x50\x29\x63\x28\xea"
			  "\x6b\xab\xd4\x06\x4d\x15\x24\x31"
			  "\xc7\x0a\xc9\x16\xb6\x48\xf0\xbf"
			  "\x49\xdb\x68\x71\x31\x8f\x87\xe2"
			  "\x13\x05\x64\xd6\x22\x0c\xf8\x36"
			  "\x84\x24\x3e\x69\x5e\xb8\x9e\x16"
			  "\x73\x6c\x83\x1e\xe0\x9f\x9e\xba"
			  "\xe5\x59\x21\x33\x1b\xa9\x26\xc2"
			  "\xc7\xd9\x30\x73\xb6\xa6\x73\x82"
			  "\x19\xfa\x44\x4d\x40\x8b\x69\x04"
			  "\x94\x74\xea\x6e\xb3\x09\x47\x01"
			  "\x2a\xb9\x78\x34\x43\x11\xed\xd6"
			  "\x8c\x95\x65\x1b\x85\x67\xa5\x40"
			  "\xac\x9c\x05\x4b\x57\x4a\xa9\x96"
			  "\x0f\xdd\x4f\xa1\xe0\xcf\x6e\xc7"
			  "\x1b\xed\xa2\xb4\x56\x8c\x09\x6e"
			  "\xa6\x65\xd7\x55\x81\xb7\xed\x11"
			  "\x9b\x40\x75\xa8\x6b\x56\xaf\x16"
			  "\x8b\x3d\xf4\xcb\xfe\xd5\x1d\x3d"
			  "\x85\xc2\xc0\xde\x43\x39\x4a\x96"
			  "\xba\x88\x97\xc0\xd6\x00\x0e\x27"
			  "\x21\xb0\x21\x52\xba\xa7\x37\xaa"
			  "\xcc\xbf\x95\xa8\xf4\xd0\x91\xf6",
		.len	= 512,
		.also_non_np = 1,
		.np	= 3,
		.tap	= { 72, 187, 253 },
	}
};

static const struct cipher_testvec hbsh_xchacha20_aes_nhpoly1305_tv_template[] = {
	{
		.key	= "\x9e\xeb\xb2\x49\x3c\x1c\xf5\xf4"
			  "\x6a\x99\xc2\xc4\xdf\xb1\xf4\xdd"
			  "\x75\x20\x57\xea\x2c\x4f\xcd\xb2"
			  "\xa5\x3d\x7b\x49\x1e\xab\xfd\x0f",
		.klen	= 32,
		.iv	= "\xdf\x63\xd4\xab\xd2\x49\xf3\xd8"
			  "\x33\x81\x37\x60\x7d\xfa\x73\x08"
			  "\xd8\x49\x6d\x80\xe8\x2f\x62\x54"
			  "\xeb\x0e\xa9\x39\x5b\x45\x7f\x8a",
		.ptext	= "\x67\xc9\xf2\x30\x84\x41\x8e\x43"
			  "\xfb\xf3\xb3\x3e\x79\x36\x7f\xe8",
		.ctext	= "\xf6\x78\x97\xd6\xaa\x94\x01\x27"
			  "\x2e\x4d\x83\xe0\x6e\x64\x9a\xdf",
		.len	= 16,
		.also_non_np = 1,
		.np	= 4,
		.tap	= { 2, 1, 10, 3 },
	}, {
		.key	= "\x36\x2b\x57\x97\xf8\x5d\xcd\x99"
			  "\x5f\x1a\x5a\x44\x1d\x92\x0f\x27"
			  "\xcc\x16\xd7\x2b\x85\x63\x99\xd3"
			  "\xba\x96\xa1\xdb\xd2\x60\x68\xda",
		.klen	= 32,
		.iv	= "\xef\x58\x69\xb1\x2c\x5e\x9a\x47"
			  "\x24\xc1\xb1\x69\xe1\x12\x93\x8f"
			  "\x43\x3d\x6d\x00\xdb\x5e\xd8\xd9"
			  "\x12\x9a\xfe\xd9\xff\x2d\xaa\xc4",
		.ptext	= "\x5e\xa8\x68\x19\x85\x98\x12\x23"
			  "\x26\x0a\xcc\xdb\x0a\x04\xb9\xdf"
			  "\x4d\xb3\x48\x7b\xb0\xe3\xc8\x19"
			  "\x43\x5a\x46\x06\x94\x2d\xf2",
		.ctext	= "\x4b\xb8\x90\x10\xdf\x7f\x64\x08"
			  "\x0e\x14\x42\x5f\x00\x74\x09\x36"
			  "\x57\x72\xb5\xfd\xb5\x5d\xb8\x28"
			  "\x0c\x04\x91\x14\x91\xe9\x37",
		.len	= 31,
		.also_non_np = 1,
		.np	= 6,
		.tap	= { 9, 9, 5, 3, 4, 1 },
	}, {
		.key	= "\xa5\x28\x24\x34\x1a\x3c\xd8\xf7"
			  "\x05\x91\x8f\xee\x85\x1f\x35\x7f"
			  "\x80\x3d\xfc\x9b\x94\xf6\xfc\x9e"
			  "\x19\x09\x00\xa9\x04\x31\x4f\x11",
		.klen	= 32,
		.iv	= "\xa1\xba\x49\x95\xff\x34\x6d\xb8"
			  "\xcd\x87\x5d\x5e\xfd\xea\x85\xdb"
			  "\x8a\x7b\x5e\xb2\x5d\x57\xdd\x62"
			  "\xac\xa9\x8c\x41\x42\x94\x75\xb7",
		.ptext	= "\x69\xb4\xe8\x8c\x37\xe8\x67\x82"
			  "\xf1\xec\x5d\x04\xe5\x14\x91\x13"
			  "\xdf\xf2\x87\x1b\x69\x81\x1d\x71"
			  "\x70\x9e\x9c\x3b\xde\x49\x70\x11"
			  "\xa0\xa3\xdb\x0d\x54\x4f\x66\x69"
			  "\xd7\xdb\x80\xa7\x70\x92\x68\xce"
			  "\x81\x04\x2c\xc6\xab\xae\xe5\x60"
			  "\x15\xe9\x6f\xef\xaa\x8f\xa7\xa7"
			  "\x63\x8f\xf2\xf0\x77\xf1\xa8\xea"
			  "\xe1\xb7\x1f\x9e\xab\x9e\x4b\x3f"
			  "\x07\x87\x5b\x6f\xcd\xa8\xaf\xb9"
			  "\xfa\x70\x0b\x52\xb8\xa8\xa7\x9e"
			  "\x07\x5f\xa6\x0e\xb3\x9b\x79\x13"
			  "\x79\xc3\x3e\x8d\x1c\x2c\x68\xc8"
			  "\x51\x1d\x3c\x7b\x7d\x79\x77\x2a"
			  "\x56\x65\xc5\x54\x23\x28\xb0\x03",
		.ctext	= "\xb1\x8b\xa0\x05\x77\xa8\x4d\x59"
			  "\x1b\x8e\x21\xfc\x3a\x49\xfa\xd4"
			  "\xeb\x36\xf3\xc4\xdf\xdc\xae\x67"
			  "\x07\x3f\x70\x0e\xe9\x66\xf5\x0c"
			  "\x30\x4d\x66\xc9\xa4\x2f\x73\x9c"
			  "\x13\xc8\x49\x44\xcc\x0a\x90\x9d"
			  "\x7c\xdd\x19\x3f\xea\x72\x8d\x58"
			  "\xab\xe7\x09\x2c\xec\xb5\x44\xd2"
			  "\xca\xa6\x2d\x7a\x5c\x9c\x2b\x15"
			  "\xec\x2a\xa6\x69\x91\xf9\xf3\x13"
			  "\xf7\x72\xc1\xc1\x40\xd5\xe1\x94"
			  "\xf4\x29\xa1\x3e\x25\x02\xa8\x3e"
			  "\x94\xc1\x91\x14\xa1\x14\xcb\xbe"
			  "\x67\x4c\xb9\x38\xfe\xa7\xaa\x32"
			  "\x29\x62\x0d\xb2\xf6\x3c\x58\x57"
			  "\xc1\xd5\x5a\xbb\xd6\xa6\x2a\xe5",
		.len	= 128,
		.also_non_np = 1,
		.np	= 8,
		.tap	= { 10, 3, 6, 21, 38, 16, 22, 12 },
	}, {
		.key	= "\xd3\x81\x72\x18\x23\xff\x6f\x4a"
			  "\x25\x74\x29\x0d\x51\x8a\x0e\x13"
			  "\xc1\x53\x5d\x30\x8d\xee\x75\x0d"
			  "\x14\xd6\x69\xc9\x15\xa9\x0c\x60",
		.klen	= 32,
		.iv	= "\x65\x9b\xd4\xa8\x7d\x29\x1d\xf4"
			  "\xc4\xd6\x9b\x6a\x28\xab\x64\xe2"
			  "\x62\x81\x97\xc5\x81\xaa\xf9\x44"
			  "\xc1\x72\x59\x82\xaf\x16\xc8\x2c",
		.ptext	= "\xc7\x6b\x52\x6a\x10\xf0\xcc\x09"
			  "\xc1\x12\x1d\x6d\x21\xa6\x78\xf5"
			  "\x05\xa3\x69\x60\x91\x36\x98\x57"
			  "\xba\x0c\x14\xcc\xf3\x2d\x73\x03"
			  "\xc6\xb2\x5f\xc8\x16\x27\x37\x5d"
			  "\xd0\x0b\x87\xb2\x50\x94\x7b\x58"
			  "\x04\xf4\xe0\x7f\x6e\x57\x8e\xc9"
			  "\x41\x84\xc1\xb1\x7e\x4b\x91\x12"
			  "\x3a\x8b\x5d\x50\x82\x7b\xcb\xd9"
			  "\x9a\xd9\x4e\x18\x06\x23\x9e\xd4"
			  "\xa5\x20\x98\xef\xb5\xda\xe5\xc0"
			  "\x8a\x6a\x83\x77\x15\x84\x1e\xae"
			  "\x78\x94\x9d\xdf\xb7\xd1\xea\x67"
			  "\xaa\xb0\x14\x15\xfa\x67\x21\x84"
			  "\xd3\x41\x2a\xce\xba\x4b\x4a\xe8"
			  "\x95\x62\xa9\x55\xf0\x80\xad\xbd"
			  "\xab\xaf\xdd\x4f\xa5\x7c\x13\x36"
			  "\xed\x5e\x4f\x72\xad\x4b\xf1\xd0"
			  "\x88\x4e\xec\x2c\x88\x10\x5e\xea"
			  "\x12\xc0\x16\x01\x29\xa3\xa0\x55"
			  "\xaa\x68\xf3\xe9\x9d\x3b\x0d\x3b"
			  "\x6d\xec\xf8\xa0\x2d\xf0\x90\x8d"
			  "\x1c\xe2\x88\xd4\x24\x71\xf9\xb3"
			  "\xc1\x9f\xc5\xd6\x76\x70\xc5\x2e"
			  "\x9c\xac\xdb\x90\xbd\x83\x72\xba"
			  "\x6e\xb5\xa5\x53\x83\xa9\xa5\xbf"
			  "\x7d\x06\x0e\x3c\x2a\xd2\x04\xb5"
			  "\x1e\x19\x38\x09\x16\xd2\x82\x1f"
			  "\x75\x18\x56\xb8\x96\x0b\xa6\xf9"
			  "\xcf\x62\xd9\x32\x5d\xa9\xd7\x1d"
			  "\xec\xe4\xdf\x1b\xbe\xf1\x36\xee"
			  "\xe3\x7b\xb5\x2f\xee\xf8\x53\x3d"
			  "\x6a\xb7\x70\xa9\xfc\x9c\x57\x25"
			  "\xf2\x89\x10\xd3\xb8\xa8\x8c\x30"
			  "\xae\x23\x4f\x0e\x13\x66\x4f\xe1"
			  "\xb6\xc0\xe4\xf8\xef\x93\xbd\x6e"
			  "\x15\x85\x6b\xe3\x60\x81\x1d\x68"
			  "\xd7\x31\x87\x89\x09\xab\xd5\x96"
			  "\x1d\xf3\x6d\x67\x80\xca\x07\x31"
			  "\x5d\xa7\xe4\xfb\x3e\xf2\x9b\x33"
			  "\x52\x18\xc8\x30\xfe\x2d\xca\x1e"
			  "\x79\x92\x7a\x60\x5c\xb6\x58\x87"
			  "\xa4\x36\xa2\x67\x92\x8b\xa4\xb7"
			  "\xf1\x86\xdf\xdc\xc0\x7e\x8f\x63"
			  "\xd2\xa2\xdc\x78\xeb\x4f\xd8\x96"
			  "\x47\xca\xb8\x91\xf9\xf7\x94\x21"
			  "\x5f\x9a\x9f\x5b\xb8\x40\x41\x4b"
			  "\x66\x69\x6a\x72\xd0\xcb\x70\xb7"
			  "\x93\xb5\x37\x96\x05\x37\x4f\xe5"
			  "\x8c\xa7\x5a\x4e\x8b\xb7\x84\xea"
			  "\xc7\xfc\x19\x6e\x1f\x5a\xa1\xac"
			  "\x18\x7d\x52\x3b\xb3\x34\x62\x99"
			  "\xe4\x9e\x31\x04\x3f\xc0\x8d\x84"
			  "\x17\x7c\x25\x48\x52\x67\x11\x27"
			  "\x67\xbb\x5a\x85\xca\x56\xb2\x5c"
			  "\xe6\xec\xd5\x96\x3d\x15\xfc\xfb"
			  "\x22\x25\xf4\x13\xe5\x93\x4b\x9a"
			  "\x77\xf1\x52\x18\xfa\x16\x5e\x49"
			  "\x03\x45\xa8\x08\xfa\xb3\x41\x92"
			  "\x79\x50\x33\xca\xd0\xd7\x42\x55"
			  "\xc3\x9a\x0c\x4e\xd9\xa4\x3c\x86"
			  "\x80\x9f\x53\xd1\xa4\x2e\xd1\xbc"
			  "\xf1\x54\x6e\x93\xa4\x65\x99\x8e"
			  "\xdf\x29\xc0\x64\x63\x07\xbb\xea",
		.ctext	= "\xe0\x33\xf6\xe0\xb4\xa5\xdd\x2b"
			  "\xdd\xce\xfc\x12\x1e\xfc\x2d\xf2"
			  "\x8b\xc7\xeb\xc1\xc4\x2a\xe8\x44"
			  "\x0f\x3d\x97\x19\x2e\x6d\xa2\x38"
			  "\x9d\xa6\xaa\xe1\x96\xb9\x08\xe8"
			  "\x0b\x70\x48\x5c\xed\xb5\x9b\xcb"
			  "\x8b\x40\x88\x7e\x69\x73\xf7\x16"
			  "\x71\xbb\x5b\xfc\xa3\x47\x5d\xa6"
			  "\xae\x3a\x64\xc4\xe7\xb8\xa8\xe7"
			  "\xb1\x32\x19\xdb\xe3\x01\xb8\xf0"
			  "\xa4\x86\xb4\x4c\xc2\xde\x5c\xd2"
			  "\x6c\x77\xd2\xe8\x18\xb7\x0a\xc9"
			  "\x3d\x53\xb5\xc4\x5c\xf0\x8c\x06"
			  "\xdc\x90\xe0\x74\x47\x1b\x0b\xf6"
			  "\xd2\x71\x6b\xc4\xf1\x97\x00\x2d"
			  "\x63\x57\x44\x1f\x8c\xf4\xe6\x9b"
			  "\xe0\x7a\xdd\xec\x32\x73\x42\x32"
			  "\x7f\x35\x67\x60\x0d\xcf\x10\x52"
			  "\x61\x22\x53\x8d\x8e\xbb\x33\x76"
			  "\x59\xd9\x10\xce\xdf\xef\xc0\x41"
			  "\xd5\x33\x29\x6a\xda\x46\xa4\x51"
			  "\xf0\x99\x3d\x96\x31\xdd\xb5\xcb"
			  "\x3e\x2a\x1f\xc7\x5c\x79\xd3\xc5"
			  "\x20\xa1\xb1\x39\x1b\xc6\x0a\x70"
			  "\x26\x39\x95\x07\xad\x7a\xc9\x69"
			  "\xfe\x81\xc7\x88\x08\x38\xaf\xad"
			  "\x9e\x8d\xfb\xe8\x24\x0d\x22\xb8"
			  "\x0e\xed\xbe\x37\x53\x7c\xa6\xc6"
			  "\x78\x62\xec\xa3\x59\xd9\xc6\x9d"
			  "\xb8\x0e\x69\x77\x84\x2d\x6a\x4c"
			  "\xc5\xd9\xb2\xa0\x2b\xa8\x80\xcc"
			  "\xe9\x1e\x9c\x5a\xc4\xa1\xb2\x37"
			  "\x06\x9b\x30\x32\x67\xf7\xe7\xd2"
			  "\x42\xc7\xdf\x4e\xd4\xcb\xa0\x12"
			  "\x94\xa1\x34\x85\x93\x50\x4b\x0a"
			  "\x3c\x7d\x49\x25\x01\x41\x6b\x96"
			  "\xa9\x12\xbb\x0b\xc0\xd7\xd0\x93"
			  "\x1f\x70\x38\xb8\x21\xee\xf6\xa7"
			  "\xee\xeb\xe7\x81\xa4\x13\xb4\x87"
			  "\xfa\xc1\xb0\xb5\x37\x8b\x74\xa2"
			  "\x4e\xc7\xc2\xad\x3d\x62\x3f\xf8"
			  "\x34\x42\xe5\xae\x45\x13\x63\xfe"
			  "\xfc\x2a\x17\x46\x61\xa9\xd3\x1c"
			  "\x4c\xaf\xf0\x09\x62\x26\x66\x1e"
			  "\x74\xcf\xd6\x68\x3d\x7d\xd8\xb7"
			  "\xe7\xe6\xf8\xf0\x08\x20\xf7\x47"
			  "\x1c\x52\xaa\x0f\x3e\x21\xa3\xf2"
			  "\xbf\x2f\x95\x16\xa8\xc8\xc8\x8c"
			  "\x99\x0f\x5d\xfb\xfa\x2b\x58\x8a"
			  "\x7e\xd6\x74\x02\x60\xf0\xd0\x5b"
			  "\x65\xa8\xac\xea\x8d\x68\x46\x34"
			  "\x26\x9d\x4f\xb1\x9a\x8e\xc0\x1a"
			  "\xf1\xed\xc6\x7a\x83\xfd\x8a\x57"
			  "\xf2\xe6\xe4\xba\xfc\xc6\x3c\xad"
			  "\x5b\x19\x50\x2f\x3a\xcc\x06\x46"
			  "\x04\x51\x3f\x91\x97\xf0\xd2\x07"
			  "\xe7\x93\x89\x7e\xb5\x32\x0f\x03"
			  "\xe5\x58\x9e\x74\x72\xeb\xc2\x38"
			  "\x00\x0c\x91\x72\x69\xed\x7d\x6d"
			  "\xc8\x71\xf0\xec\xff\x80\xd9\x1c"
			  "\x9e\xd2\xfa\x15\xfc\x6c\x4e\xbc"
			  "\xb1\xa6\xbd\xbd\x70\x40\xca\x20"
			  "\xb8\x78\xd2\xa3\xc6\xf3\x79\x9c"
			  "\xc7\x27\xe1\x6a\x29\xad\xa4\x03",
		.len	= 512,
		.also_non_np = 1,
		.np	= 8,
		.tap	= { 52, 118, 12, 41, 19, 45, 64, 161 },
	}
};

