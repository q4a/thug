#file(GLOB_RECURSE CORE_SOURCE ./core/*.cpp)
#file(GLOB_RECURSE CORE_INLINE ./core/*.inl)
#file(GLOB_RECURSE CORE_HEADER ./core/*.h)
list(APPEND DIRS_CORE
	"core"
	"core/debug"
#	"core/debug/ngc"
#	"core/debug/ngps"
	"core/debug/wn32"
#	"core/debug/xbox"
	"core/list"
	"core/math"
#	"core/math/xbox"
	"core/string"
	"core/support"
	"core/task"
#	"core/thread/ngc"
#	"core/thread/ngps"
	"core/thread/wn32"
	)
add_dir("${DIRS_CORE}" "CORE")

list(APPEND DIRS_GEL
	"gel"
	"gel/assman"
	"gel/collision"
	"gel/components"
	"gel/environment"
	"gel/input"
	"gel/mainloop"
	"gel/module"
	"gel/movies"
#	"gel/movies/ngc"
#	"gel/movies/ngps"
#	"gel/movies/xbox"
	"gel/music"
#	"gel/music/ngc"
#	"gel/music/ngc/bgm"
#	"gel/music/ngc/divx"
#	"gel/music/ngc/pcm"
#	"gel/music/ngps"
#	"gel/music/ngps/bgm"
#	"gel/music/ngps/pcm"
	"gel/music/win32"
#	"gel/music/xbox"
	"gel/net"
	"gel/net/app"
	"gel/net/client"
	"gel/net/dispatch"
	"gel/net/handler"
	"gel/net/server"
	"gel/object"
	"gel/prefs"
	"gel/scripting"
	"gel/soundfx"
#	"gel/soundfx/ngc"
#	"gel/soundfx/ngps"
#	"gel/soundfx/xbox"
	)
add_dir("${DIRS_GEL}" "GEL")
# they included skiptoken.cpp ?!
list(REMOVE_ITEM GEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/gel/scripting/skiptoken.cpp")

# remove gunslinger
list(REMOVE_ITEM GEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/gel/components/gunslingercameralookaroundcomponent.cpp")
list(REMOVE_ITEM GEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/gel/components/gunslingerwalkcameracomponent.cpp")
list(REMOVE_ITEM GEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/gel/components/gunslingerwalkcomponent.cpp")
list(REMOVE_ITEM GEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/gel/components/horsecameracomponent.cpp")

list(APPEND DIRS_GFX
	"gfx"
	"gfx/2d"
#	"gfx/image"
#	"gfx/ngc"
#	"gfx/ngc/nx"
#	"gfx/ngps"
#	"gfx/ngps/nx"
#	"gfx/ngps/nx/vu1"
	"gfx/win32"
	"gfx/win32/nx"
#	"gfx/xbox"
#	"gfx/xbox/nx"
	)
add_dir("${DIRS_GFX}" "GFX")

list(APPEND DIRS_SK
	"sk"
	"sk/components"
	"sk/engine"
	"sk/gamenet"
#	"sk/gamenet/ngps"
#	"sk/gamenet/xbox"
	"sk/modules/frontend"
	"sk/modules/skate"
	"sk/modules/viewer"
#	"sk/ngc"
#	"sk/ngps"
	"sk/objects"
	"sk/parkeditor"
	"sk/parkeditor2"
	"sk/scripting"
	)
add_dir("${DIRS_SK}" "SK")
list(REMOVE_ITEM SK_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/sk/gamenet/lobby.cpp")

list(APPEND DIRS_SYS
	"sys"
	"sys/config"
#	"sys/config/ngc"
#	"sys/config/ngps"
	"sys/config/win32"
#	"sys/config/xbox"
	"sys/file"
#	"sys/file/ngc"
#	"sys/file/ngps"
#	"sys/file/ngps/fileio"
	"sys/file/win32"
#	"sys/file/xbox"
	"sys/mem"
#	"sys/memcard/ngc"
#	"sys/memcard/ngps"
	"sys/memcard/win32"
#	"sys/memcard/xbox"
#	"sys/ngc"
#	"sys/ngps"
	"sys/replay"
#	"sys/replay/ngc"
#	"sys/replay/ngps"
#	"sys/replay/win32"
#	"sys/replay/xbox"
#	"sys/sio"
#	"sys/sio/ngc"
#	"sys/sio/ngps"
	"sys/sio/win32"
#	"sys/sio/xbox"
	"sys/win32"
#	"sys/xbox"
	)
add_dir("${DIRS_SYS}" "SYS")

source_group("Core Files" FILES ${CORE_SOURCE})
source_group("Core Files" FILES ${CORE_INLINE})
source_group("Core Files" FILES ${CORE_HEADER})
source_group("Gel Files" FILES ${GEL_SOURCE})
source_group("Gel Files" FILES ${GEL_INLINE})
source_group("Gel Files" FILES ${GEL_HEADER})
source_group("Gfx Files" FILES ${GFX_SOURCE})
source_group("Gfx Files" FILES ${GFX_INLINE})
source_group("Gfx Files" FILES ${GFX_HEADER})
source_group("Sk Files" FILES ${SK_SOURCE})
source_group("Sk Files" FILES ${SK_INLINE})
source_group("Sk Files" FILES ${SK_HEADER})
source_group("Sys Files" FILES ${SYS_SOURCE})
source_group("Sys Files" FILES ${SYS_INLINE})
source_group("Sys Files" FILES ${SYS_HEADER})

#add_executable(thug INTERFACE)
add_executable(thug
	${CORE_SOURCE} ${CORE_INLINE} ${CORE_HEADER}
	${GEL_SOURCE}  ${GEL_INLINE}  ${GEL_HEADER}
	${GFX_SOURCE}  ${GFX_INLINE}  ${GFX_HEADER}
	${SK_SOURCE}   ${SK_INLINE}   ${SK_HEADER}
	${SYS_SOURCE}  ${SYS_INLINE}  ${SYS_HEADER})

target_link_libraries(thug winmm.lib ws2_32.lib)
include_directories(${INCLUDE_DIRECTORIES} ${PROJECT_SOURCE_DIR}/src)
