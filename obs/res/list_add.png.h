#ifndef LIST_ADD_PNG_H
#define LIST_ADD_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char list_add_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x10, 0x08, 0x06, 0x00, 0x00, 0x00, 0x1F, 
	0xF3, 0xFF, 0x61, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4B, 0x47, 
	0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x43, 0xBB, 
	0x7F, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 
	0x00, 0x0B, 0x13, 0x00, 0x00, 0x0B, 0x13, 0x01, 0x00, 0x9A, 
	0x9C, 0x18, 0x00, 0x00, 0x00, 0x09, 0x76, 0x70, 0x41, 0x67, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x5C, 
	0xC6, 0xAD, 0xC3, 0x00, 0x00, 0x02, 0x7C, 0x49, 0x44, 0x41, 
	0x54, 0x38, 0xCB, 0x8D, 0x92, 0xCD, 0xAB, 0x94, 0x65, 0x18, 
	0xC6, 0x7F, 0xCF, 0xFD, 0x3C, 0xEF, 0x3B, 0xF3, 0xCE, 0x34, 
	0x73, 0xBE, 0xD4, 0x51, 0x6B, 0xA1, 0xE5, 0x46, 0x5D, 0x45, 
	0x14, 0x8A, 0x41, 0x1F, 0x04, 0xD1, 0x32, 0xA4, 0xBF, 0xA0, 
	0xBF, 0x20, 0xDA, 0x88, 0x20, 0xEA, 0xAE, 0x4D, 0x08, 0xAD, 
	0x8D, 0x76, 0x41, 0xBB, 0x36, 0x16, 0x91, 0x0B, 0xC1, 0x08, 
	0x54, 0x72, 0x71, 0x42, 0xA1, 0x73, 0x92, 0xCA, 0x8E, 0x7A, 
	0x3C, 0xC7, 0x73, 0x74, 0xC6, 0x33, 0xEF, 0x99, 0x79, 0xDF, 
	0xE7, 0xB9, 0xEF, 0x16, 0xD3, 0x46, 0x27, 0xA5, 0x0B, 0xAE, 
	0xDD, 0x75, 0xFD, 0xB8, 0xB9, 0xB9, 0x1C, 0x53, 0x3A, 0x9D, 
	0xF7, 0xDE, 0xF4, 0x1F, 0xEC, 0xDF, 0x37, 0xF7, 0xA9, 0x08, 
	0xBD, 0xB2, 0x8C, 0x65, 0x7F, 0x50, 0xFD, 0xF4, 0xD7, 0x83, 
	0x87, 0x9F, 0xEB, 0xF5, 0xCF, 0xFE, 0x7C, 0x3A, 0x1D, 0xA6, 
	0xFA, 0x07, 0x36, 0x67, 0x8A, 0xF6, 0x9E, 0x0F, 0xDF, 0x79, 
	0xEF, 0xF5, 0x63, 0x45, 0xAB, 0x2D, 0x6A, 0xCA, 0x37, 0x17, 
	0xAE, 0xBD, 0x3C, 0x5F, 0xF6, 0x2F, 0x3F, 0xC0, 0xFE, 0x06, 
	0x97, 0x9E, 0x0F, 0x78, 0x71, 0x5E, 0x1C, 0x69, 0xD7, 0xE5, 
	0xA5, 0x0D, 0xD1, 0x66, 0x4D, 0xBF, 0x8C, 0xA8, 0xF3, 0x85, 
	0xD4, 0xB6, 0x00, 0x67, 0x3C, 0xF0, 0x04, 0x40, 0xA6, 0x00, 
	0xE3, 0x81, 0x37, 0x73, 0x6C, 0x8F, 0x95, 0xE1, 0x28, 0x91, 
	0xD4, 0x30, 0x80, 0x2C, 0xE7, 0xBF, 0x14, 0x00, 0x3F, 0xF1, 
	0x69, 0xE0, 0xA6, 0x67, 0xD0, 0x6D, 0xCA, 0x8C, 0x13, 0x35, 
	0x48, 0x6A, 0xA4, 0x64, 0x60, 0x60, 0x2E, 0x65, 0xB0, 0x56, 
	0xC0, 0x47, 0x7E, 0x52, 0x3D, 0x94, 0xE0, 0x6C, 0x15, 0x66, 
	0xDF, 0x3A, 0x71, 0xAC, 0x21, 0xCD, 0xD7, 0x34, 0x69, 0x27, 
	0x70, 0x90, 0x68, 0xD6, 0x56, 0x4B, 0xAF, 0xA8, 0x2A, 0xB5, 
	0x1A, 0x51, 0x8D, 0x60, 0x26, 0x99, 0xD7, 0xF7, 0x77, 0xBF, 
	0xDD, 0x5B, 0x70, 0x7E, 0x77, 0x92, 0x28, 0x6A, 0x21, 0xDC, 
	0x5F, 0xAB, 0x4F, 0x5C, 0x72, 0x87, 0x8E, 0x9F, 0xBB, 0xD2, 
	0xEE, 0xF5, 0x5E, 0x4D, 0x38, 0x31, 0x35, 0xA2, 0x99, 0x9B, 
	0xEB, 0xE4, 0x6E, 0x93, 0xAE, 0x1B, 0xAA, 0x27, 0x29, 0xB4, 
	0x75, 0x8B, 0x5D, 0xA1, 0x52, 0x70, 0x84, 0x20, 0x96, 0x07, 
	0xC1, 0xC5, 0x7A, 0x74, 0xE3, 0xD7, 0xA5, 0xAF, 0xC2, 0x0B, 
	0xDD, 0xE2, 0xC0, 0xC7, 0xC7, 0x8F, 0x64, 0xAB, 0x83, 0x1A, 
	0x35, 0xC3, 0xD4, 0xD8, 0xD8, 0x8A, 0x7C, 0xBF, 0x78, 0x9F, 
	0xA4, 0x93, 0x63, 0xDB, 0x33, 0x73, 0x1C, 0x3D, 0xBC, 0x53, 
	0xEA, 0xA8, 0xE4, 0x99, 0xA7, 0x11, 0x1C, 0xAE, 0xDE, 0x6E, 
	0x2F, 0xDD, 0x58, 0x3E, 0x18, 0x86, 0xA3, 0xBA, 0x3A, 0x7F, 
	0xF1, 0x16, 0xD1, 0x09, 0x31, 0x1A, 0x95, 0x1A, 0x75, 0x52, 
	0x6A, 0x75, 0x38, 0x27, 0x38, 0x8C, 0xE1, 0xA8, 0xE6, 0xC7, 
	0xC5, 0x7B, 0x14, 0xB9, 0xA7, 0x95, 0x7B, 0x8A, 0x46, 0xC0, 
	0xCA, 0x81, 0x89, 0x93, 0x2A, 0x94, 0xFD, 0xF2, 0x87, 0x78, 
	0xEB, 0xB7, 0x77, 0xCD, 0xAC, 0x69, 0x86, 0x53, 0x53, 0x09, 
	0x41, 0x3A, 0x6E, 0xE7, 0xBE, 0x2C, 0x86, 0x82, 0x56, 0xEE, 
	0x69, 0x96, 0xEB, 0x8C, 0x6E, 0xAF, 0x6E, 0x55, 0xDE, 0x8F, 
	0x86, 0x22, 0x88, 0x88, 0x9A, 0xE9, 0xE6, 0xB8, 0xD4, 0xEF, 
	0xC2, 0x1F, 0x8B, 0xAB, 0x27, 0xBB, 0xB3, 0x0B, 0xBD, 0x94, 
	0x95, 0xCD, 0x0E, 0x30, 0xEE, 0xF8, 0x85, 0x4E, 0x1E, 0x4E, 
	0x35, 0x77, 0xBC, 0xF4, 0x86, 0xCF, 0x84, 0x22, 0x17, 0x78, 
	0x34, 0x8E, 0x1B, 0x77, 0xD6, 0xBF, 0x4C, 0x55, 0xFD, 0xAD, 
	0xCF, 0xFD, 0xF8, 0xF1, 0x10, 0x32, 0x5A, 0x83, 0x47, 0x72, 
	0x7B, 0x25, 0xB0, 0x72, 0xEE, 0xEE, 0x60, 0x85, 0xBB, 0x00, 
	0x43, 0x80, 0x23, 0x9F, 0xEC, 0x9D, 0x6B, 0xED, 0x78, 0xD8, 
	0x08, 0x82, 0xCF, 0x85, 0x22, 0xF7, 0xC4, 0xE0, 0xCD, 0x70, 
	0xCB, 0xEB, 0x57, 0x9B, 0x3F, 0xC3, 0xD9, 0xEA, 0xF9, 0x43, 
	0x02, 0x9C, 0x83, 0x46, 0xE6, 0x29, 0xF2, 0x89, 0x83, 0xC0, 
	0x64, 0x4D, 0xD3, 0x9A, 0x06, 0x34, 0xBA, 0xC9, 0xCC, 0xB4, 
	0x11, 0x1C, 0xAD, 0x7F, 0x9F, 0x16, 0xBC, 0x80, 0x44, 0xFD, 
	0x7F, 0x80, 0x3B, 0x9B, 0x6A, 0xF8, 0xB5, 0xA0, 0x75, 0xCA, 
	0x62, 0x89, 0xAF, 0x4A, 0x5C, 0xAA, 0xB7, 0x15, 0xD9, 0x78, 
	0xD6, 0x94, 0x9F, 0xD4, 0xEF, 0xF3, 0xFD, 0xC1, 0x1E, 0xFD, 
	0xFA, 0xDE, 0xCD, 0xE5, 0x59, 0x2F, 0xB6, 0xD7, 0x8B, 0x8B, 
	0xA9, 0x8A, 0xD7, 0x7D, 0xFF, 0xF1, 0x2F, 0xF0, 0x45, 0xF5, 
	0x74, 0xFC, 0x1F, 0xD6, 0xC1, 0x2E, 0xDC, 0xA4, 0x2B, 0xC5, 
	0xBC, 0x00, 0x00, 0x00, 0x1D, 0x74, 0x45, 0x58, 0x74, 0x43, 
	0x6F, 0x6D, 0x6D, 0x65, 0x6E, 0x74, 0x00, 0x43, 0x72, 0x65, 
	0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 
	0x54, 0x68, 0x65, 0x20, 0x47, 0x49, 0x4D, 0x50, 0xEF, 0x64, 
	0x25, 0x6E, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 
	0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x2D, 0x64, 0x61, 0x74, 
	0x65, 0x00, 0x32, 0x30, 0x30, 0x39, 0x2D, 0x31, 0x31, 0x2D, 
	0x31, 0x37, 0x54, 0x32, 0x30, 0x3A, 0x30, 0x36, 0x3A, 0x35, 
	0x35, 0x2D, 0x30, 0x37, 0x3A, 0x30, 0x30, 0x59, 0xA6, 0x2A, 
	0xBB, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 
	0x61, 0x74, 0x65, 0x3A, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 
	0x00, 0x32, 0x30, 0x31, 0x30, 0x2D, 0x30, 0x32, 0x2D, 0x32, 
	0x32, 0x54, 0x31, 0x33, 0x3A, 0x34, 0x31, 0x3A, 0x30, 0x37, 
	0x2D, 0x30, 0x37, 0x3A, 0x30, 0x30, 0xAC, 0xA6, 0x9C, 0xB4, 
	0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 
	0x74, 0x65, 0x3A, 0x6D, 0x6F, 0x64, 0x69, 0x66, 0x79, 0x00, 
	0x32, 0x30, 0x31, 0x30, 0x2D, 0x30, 0x31, 0x2D, 0x31, 0x31, 
	0x54, 0x31, 0x34, 0x3A, 0x32, 0x39, 0x3A, 0x35, 0x39, 0x2D, 
	0x30, 0x37, 0x3A, 0x30, 0x30, 0x9A, 0x31, 0xB4, 0x01, 0x00, 
	0x00, 0x00, 0x34, 0x74, 0x45, 0x58, 0x74, 0x4C, 0x69, 0x63, 
	0x65, 0x6E, 0x73, 0x65, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3A, 
	0x2F, 0x2F, 0x63, 0x72, 0x65, 0x61, 0x74, 0x69, 0x76, 0x65, 
	0x63, 0x6F, 0x6D, 0x6D, 0x6F, 0x6E, 0x73, 0x2E, 0x6F, 0x72, 
	0x67, 0x2F, 0x6C, 0x69, 0x63, 0x65, 0x6E, 0x73, 0x65, 0x73, 
	0x2F, 0x47, 0x50, 0x4C, 0x2F, 0x32, 0x2E, 0x30, 0x2F, 0x6C, 
	0x6A, 0x06, 0xA8, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 
	0x74, 0x6D, 0x6F, 0x64, 0x69, 0x66, 0x79, 0x2D, 0x64, 0x61, 
	0x74, 0x65, 0x00, 0x32, 0x30, 0x30, 0x39, 0x2D, 0x31, 0x31, 
	0x2D, 0x31, 0x37, 0x54, 0x32, 0x30, 0x3A, 0x30, 0x36, 0x3A, 
	0x35, 0x35, 0x2D, 0x30, 0x37, 0x3A, 0x30, 0x30, 0x06, 0x17, 
	0x5C, 0x8F, 0x00, 0x00, 0x00, 0x18, 0x74, 0x45, 0x58, 0x74, 
	0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x00, 0x49, 0x6E, 0x74, 
	0x72, 0x69, 0x67, 0x75, 0x65, 0x20, 0x49, 0x63, 0x6F, 0x6E, 
	0x20, 0x53, 0x65, 0x74, 0xAE, 0x27, 0xA1, 0x3F, 0x00, 0x00, 
	0x00, 0x46, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x75, 0x72, 
	0x63, 0x65, 0x5F, 0x55, 0x52, 0x4C, 0x00, 0x68, 0x74, 0x74, 
	0x70, 0x3A, 0x2F, 0x2F, 0x73, 0x69, 0x6D, 0x70, 0x6C, 0x65, 
	0x69, 0x6E, 0x6E, 0x6F, 0x76, 0x61, 0x74, 0x69, 0x6F, 0x6E, 
	0x2E, 0x6E, 0x65, 0x74, 0x2F, 0x69, 0x6E, 0x64, 0x65, 0x78, 
	0x2E, 0x70, 0x68, 0x70, 0x3F, 0x70, 0x61, 0x67, 0x65, 0x3D, 
	0x32, 0x32, 0x26, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x3D, 
	0x32, 0x26, 0x69, 0x64, 0x3D, 0x32, 0x95, 0x41, 0xF9, 0xC6, 
	0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 
	0x60, 0x82, 
};

wxBitmap& list_add_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( list_add_png, sizeof( list_add_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //LIST_ADD_PNG_H