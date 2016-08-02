require 'test_helper'

class BashControllerTest < ActionController::TestCase
  test "should get index" do
    get :index
    assert_response :success
  end

  test "should get shabang" do
    get :shabang
    assert_response :success
  end

end
