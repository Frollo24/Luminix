#pragma once
#include <Luminx.h>

class BasicLightingLayer : public Luminx::Layer
{
public:
	BasicLightingLayer() : Layer("BasicLightingLayer") {}

	void OnAttach() override;
	void OnDetach() override;
	void OnUpdate() override;
	void OnEvent(Luminx::Event& e) override;

	bool OnWindowResize(Luminx::WindowResizeEvent& e);
};

