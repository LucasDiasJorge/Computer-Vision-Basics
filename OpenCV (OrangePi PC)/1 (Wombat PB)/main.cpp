#include <opencv2/opencv.hpp>

int main() {
    // Carregar a imagem
    cv::Mat image = cv::imread("imagem.jpg");

    if (image.empty()) {
        std::cerr << "Erro ao carregar a imagem!" << std::endl;
        return 1;
    }

    // Converter para escala de cinza
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    // Salvar a imagem em escala de cinza
    cv::imwrite("imagem_pb.jpg", grayImage);

    return 0;
}
