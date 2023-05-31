#pragma once
#include <glew.h>

#include <string>

using namespace std;

class Texture
{
public:
	Texture();
	Texture(const char* FileLoc);
	bool LoadTexture();
	bool LoadTextureA();
	void UseTexture();
	void ClearTexture();
	~Texture();
private: 
	GLuint textureID;
	int width, height, bitDepth;
	const char *path;
	string type;


};

