require 'test_helper'

class RailsControllerTest < ActionController::TestCase
  test "should get index" do
    get :index
    assert_response :success
  end

  test "should get installation" do
    get :installation
    assert_response :success
  end

  test "should get setup" do
    get :setup
    assert_response :success
  end

end
