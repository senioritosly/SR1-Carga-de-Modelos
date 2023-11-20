#include <vector>
#include <glm/glm.hpp>
#include "face.h"

std::vector<glm::vec3> setupVertexArray(const std::vector<glm::vec3>& vertices, const std::vector<Face>& faces)
{
    std::vector<glm::vec3> vertexArray;

    for (const auto& face : faces)
    {
        for (const auto& vertexIndices : face.vertexIndices)
        {
            glm::vec3 vertexPosition = vertices[vertexIndices[0]];

            vertexArray.push_back(vertexPosition);
        }
    }

    return vertexArray;
}