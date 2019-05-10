# CMake build : third party

set (THIRD_PARTY_PATH "${PROJECT_SOURCE_DIR}/third_party")

# spdlog --------------------------------------------------------------
set (SPDLOG_PATH "${THIRD_PARTY_PATH}/spdlog")
set (SPDLOG_INCLUDE_PATH "${SPDLOG_PATH}/include")

# json --------------------------------------------------------------
set (JSON_PATH "${THIRD_PARTY_PATH}/json")
set (JSON_INCLUDE_PATH "${JSON_PATH}/include")
add_subdirectory(${JSON_PATH})
#find_package(nlohmann_json REQUIRED)


set (THIRD_PARTY_INCLUDE_PATH
		${SPDLOG_INCLUDE_PATH}
		${JSON_INCLUDE_PATH}
		PARENT_SCOPE
	)
