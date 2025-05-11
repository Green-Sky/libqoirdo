#pragma once

#include <cstdint>
#include <vector>

struct qoi_rdo_desc {
	unsigned int width;
	unsigned int height;
	unsigned char channels;
	unsigned char colorspace;
};

// quality 1-100
std::vector<uint8_t> encode_qoi_rdo_simple(const uint8_t* data, const qoi_rdo_desc& desc, int quality);

// TODO: finetuneable
//uint8_t* encode_qoi_rdo_advanced(const uint8_t* data, const qoi_rdo_desc* desc, int* out_len);
