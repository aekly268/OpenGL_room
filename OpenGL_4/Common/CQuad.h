#ifndef CQUAD_H
#define CQUAD_H
#include "../header/Angel.h"
#include "CShape.h"

#define QUAD_NUM 6		// 2 faces, 2 triangles/face 

class CQuad : public CShape
{
private:

	//vec4 m_Points[QUAD_NUM];
	//vec3 m_Normal[QUAD_NUM];	// �� vec3 �ӫŧi�O���F�`�٭p��, �p�G�n���{���g�_�ӧ��K�A�i��� vec4 �ӫŧi
	//vec4 m_Colors[QUAD_NUM];

public:
	CQuad();

	void Update(float dt, point4 vLightPos, color4 vLightI);
	void Update(float dt, const LightSource &Lights);
	void Update(float dt, const LightSource &Lights, const LightSource &Lights2);
	void Update(float dt, const LightSource &Lights, const LightSource &Lights2,  const LightSource &Lights3, const LightSource &Lights4);

	void Update(float dt); // ���p��������ө�

	GLuint GetShaderHandle() { return m_uiProgram;} 
	void RenderWithFlatShading(point4 vLightPos, color4 vLightI);//  vLightI: Light Intensity
	void RenderWithGouraudShading(point4 vLightPos, color4 vLightI);//  vLightI: Light Intensity
	void RenderWithFlatShading(const LightSource &Lights);//  vLightI: Light Intensity
	void RenderWithGouraudShading(const LightSource &Lights);//  vLightI: Light Intensity
	void SetVtxColors(vec4 vLFColor, vec4 vLRColor, vec4 vTRColor, vec4 vTLColor); // four Vertices' Color
	void SetVtxColors(vec4 vFColor, vec4 vSColor);	// three Vertices' Color with idx as the first 

	void Draw();
	void DrawW();
};




#endif