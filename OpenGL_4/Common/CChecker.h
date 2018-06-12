#ifndef CCHECKER_H
#define CCHECKER_H

#include "TypeDefine.h"
#include "CQuad.h"


// �H (0,0) ������ ���X�@�� nXn ���ѽL���
// n �b�ŧi�ɵ��w
class CChecker {

private:
	CQuad *m_pSquares;
	int    m_iGridSize;
	float  *m_pfSquaresT;
	GLuint m_uiShaderHandle;
	float  m_fYPos;

public:
	CChecker(int iSize = 6, float fYPos = 0.0f); // �w�]�� 6 X 6 ���, �C�@�Ӥ��������O 1
	~CChecker();

	void SetShader();
	void SetProjectionMatrix(mat4 &mat);
	void SetViewMatrix(mat4 &mat);
	void SetTRSMatrix(mat4 &mat);
	void SetShadingMode(int iMode);
	void Update(float dt, point4 vLightPos, color4 vLightI);
	void Update(float dt,const LightSource &Lights);
	void Update(float dt, const LightSource &Lights, const LightSource &Lights2);
	void Update(float dt, const LightSource &Lights, const LightSource &Lights2, const LightSource &Lights3, const LightSource &Lights4);
	void Draw();

	// For setting materials 
	void SetMaterials(color4 ambient, color4 diffuse, color4 specular);
	void SetKaKdKsShini(float ka, float kd, float ks, float shininess); // ka kd ks shininess
};

#endif